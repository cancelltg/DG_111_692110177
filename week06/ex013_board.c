#include <stdio.h>
int main()
{
    int rows = 3;
    int cols = 5;
    int count = 1;
    // nested for loop to print numbers in a triangular pattern
    for (int i = 0; i < rows; i++)
    {
        printf("+---+---+---+---+---+ \n");
        printf("|");
        for (int j = 0; j < cols; j++)
        {
            printf("%2d |", count);
            count++;
        }
        printf("\n");
        printf("+---+---+---+---+---+ \n");
    }
    return 0;
}