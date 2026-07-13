#include <stdio.h>
#include <math.h>
int main()
{
    int player_attack;
    int enemy_defense;
    int hitnumber;
    int damage = player_attack - enemy_defense;
    int is_crit = player_attack - enemy_defense * 1.5;
    printf("=== COMBAT SIMULATOR === ");
    printf("\nPlayer ATK: ");
    scanf("%d", &player_attack);
    printf("\nEnemy DEF: ");
    scanf("%d", &enemy_defense);
    printf("\nHit Number: ");
    scanf("%d", &hitnumber);
    printf("\nDamage: %d", damage);
    printf("player_attack - enemy_defense = %f\n", (float)(player_attack - enemy_defense));
    if (hitnumber % 5 == 0)
    {
        damage = (int)ceil((float)damage * 1.5);
        printf("damage = %d (critical hit!)\n", damage);
    }
    else
    {
        printf("damage = %d (normal)\n", damage);
    }
}