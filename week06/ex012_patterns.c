#include <stdio.h>
int main()
{
    // Triangle
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // Square
    for (int i_square = 1; i_square <= 4; i_square++)
    {
        for (int j_square = 1; j_square <= 4; j_square++)
        {
            printf("*");
        }
        printf("\n");
    }
    // diamond
    int n = 3;
    for (int i_diamond = 1; i_diamond <= n; i_diamond++)
    {
        for (int j_diamond = 1; j_diamond <= n - i_diamond; j_diamond++)
        {
            printf(" ");
        }
        for (int j_diamond = 1; j_diamond <= 2 * i_diamond - 1; j_diamond++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i_diamond = n - 1; i_diamond >= 1; i_diamond--)
    {
        for (int j_diamond = 1; j_diamond <= n - i_diamond; j_diamond++)
        {
            printf(" ");
        }
        for (int j_diamond = 1; j_diamond <= 2 * i_diamond - 1; j_diamond++)
        {
            printf("*");
        }
        printf("\n");
    }
}