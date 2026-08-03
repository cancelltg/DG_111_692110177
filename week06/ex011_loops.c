#include <stdio.h>
int main()
{
    int sum = 0;
    // for loop
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("for loop ->sum =%d\n", sum);
    // while loop
    sum = 0;
    int i_while = 1;
    while (i_while <= 10)
    {
        sum += i_while;
        i_while++;
    }
    printf("while loop ->sum =%d\n", sum);
    // do while loop
    sum = 0;
    int i_do_while = 1;
    do
    {
        sum += i_do_while;
        i_do_while++;
    } while (i_do_while <= 10);
    printf("do-while loop ->sum =%d\n", sum);
}