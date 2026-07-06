#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char name[50];
    int age;
    float gpa;
    char favorite_subject[50];

    // แสดงค่าตัวแปร
    printf("Fill in the information:\n");
    printf("Name:\n");
    scanf("%s", name);
    printf("Age:\n");
    scanf("%d", &age);
    printf("GPA:\n");
    scanf("%f", &gpa);
    printf("Favorite Subject:\n");
    scanf("%s", favorite_subject);
    printf("\nPersonal Card:\n");
    printf("┌───────────────────────────────┐\n");
    printf("│name: %s │\n", name);
    printf("│age: %d ปี│\n", age);
    printf("│gpa: %f│\n", gpa);
    printf("│favorite subject: %s│\n", favorite_subject);
    printf("└───────────────────────────────┘\n");
    return 0;
}