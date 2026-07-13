#include <stdio.h>
int main()
{
    // 1.1 — Integer Division & Modulo:
    printf("Expression:10/3 = %d\n", 10 / 3);

    printf("Expression1:10.0 /3 = %f\n", 10.0 / 3);

    float a = 10.0 / 3.0;
    printf("Expression2: 10.0 / 3.0 = %f\n", a);

    printf("Expression3: 10 %% 3 = %d\n", 10 % 3);
    printf("Expression4: -7 %% 3 = %d\n", -7 % 3);
    printf("Expression5: 7 %% -3 = %d\n", 7 % -3);
    // 1.2 — Increment/Decrement:
    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);
    // 1.3 — Precedence Test:
    printf("Expression3.1: 2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("Expression3.2: (2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("Expression3.3: 10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("Expression3.4: 2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);
}
