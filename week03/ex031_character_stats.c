#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char name[50];
    int max_hp = 150;
    int atk = 75;
    int def = 50;
    int level = 1;

    // แสดงค่าตัวแปร
    printf("build character:\n");
    printf("Name:\n");
    scanf("%s", name);
    printf("Max HP: %d\n", max_hp);
    printf("ATK: %d\n", atk);
    printf("DEF: %d\n", def);
    printf("Level: %d\n", level);
    printf("\nYour character stats:\n");
    printf("name: %s \n", name);
    printf("max hp: %d\n", max_hp);
    printf("atk: %d\n", atk);
    printf("def: %d\n", def);
    printf("level: %d\n", level);
    return 0;
}