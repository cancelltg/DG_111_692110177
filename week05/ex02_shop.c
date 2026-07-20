#include <stdio.h>
int main()
{
    printf("Welcome to the shop!\n");
    printf("=== ITEM SHOP ===\n");
    printf("Gold: 1,000\n");
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");
    printf("==purchased!==\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("You purchased a Health Potion!\n");
        printf("Your HP has increased by 50!\n");
        printf("your gold have 950 left\n");
    }
    else if (choice == 2)
    {
        printf("You purchased a Mana Potion!\n");
        printf("Your MP has increased by 30!\n");
        printf("your gold have 920 left\n");
    }
    else if (choice == 3)
    {
        printf("You purchased an Iron Sword!\n");
        printf("Your ATK has increased by 20!\n");
        printf("your gold have 500 left\n");
    }
    else if (choice == 4)
    {
        printf("You purchased Leather Armor!\n");
        printf("Your DEF has increased by 15!\n");
        printf("your gold have 700 left\n");
    }
    else if (choice == 5)
    {
        printf("Thank you for visiting the shop!\n");
    }
}