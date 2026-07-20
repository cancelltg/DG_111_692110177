#include <stdio.h>
int main()
{
    int hp;
    int damage;
    int is_poisoned;
    printf(" HP: ");
    scanf("%d", &hp);
    printf("Damage taken: ");
    scanf("%d", &damage);
    printf("Is the character poisoned? (1 for yes, 0 for no): ");
    scanf("%d", &is_poisoned);
    printf("=== Character Status ===\n");
    if (is_poisoned)
    {
        printf("character is POISONED");
    }
    if (hp <= 0)
    {
        printf("Dead");
    }
    if (hp < 25)
    {
        printf("Critical");
    }
    if ("default")
    {
        printf("Normal");
    }
}