#include <stdio.h>
#include <math.h>
int calculateDamage(int attack, int defense);
int isCriticalHit(int roundNumber);
void displayHP(int current, int max);
void printCombatResult(int round, int damage, int isCrit);

int main(void)
{
    int attack = 80;
    int defense = 25;
    int enemyHP = 500;
    int enemyMaxHP = 500;
    printf("=== COMBAT SIMULATOR ===\n");
    printf("-------------------------------------------\n");
    for (int round = 1; round <= 10 && enemyHP > 0; round++)
    {
        // เช็คว่า round นี้เป็น critical hit หรือไม่ (ทุก 5 round)
        int isCrit = isCriticalHit(round);

        // คานวณ damage: ถ้า critical คูณ attack ด้วย 1.5 ก่อนลบ defense
        int applyCritMultiplier = isCrit ? (int)(attack * 1.5) : attack;
        int damage = calculateDamage(applyCritMultiplier, defense);
        if (damage < 1)
            damage = 1;
        {
            enemyHP -= damage;
            if (enemyHP < 0)
                enemyHP = 0;
            // พิมพ์ "Round N: Normal/CRITICAL — Damage: D | "
            printCombatResult(round, damage, isCrit);

            // สร้างและพิมพ์ HP bar เช่น Enemy HP: [########--] 445/500
            displayHP(enemyHP, enemyMaxHP);
        }
    }
    return 0;
}

int isCriticalHit(int roundNumber)
{
    return (roundNumber % 5 == 0);
}

int calculateDamage(int attack, int defense)
{
    int scaledAttack = attack;
    int damage = scaledAttack - defense;
    if (damage < 1)
        damage = 1;
    return damage;
}

void printCombatResult(int round, int damage, int isCrit)
{
    if (isCrit)
    {
        printf("*** CRITICAL! ***");
    }
    else
    {
        printf("Normal ");
    }
    printf(" — Damage: %2d | ", damage);
}

void displayHP(int current, int max)
{
    int filled = (current * 10) / max;
    char bar[11];
    for (int i = 0; i < 10; i++)
    {
        bar[i] = (i < filled) ? '#' : '-';
    }
    bar[10] = '\0';
    printf("Enemy HP: [%s] %d/%d\n", bar, current, max);
}
