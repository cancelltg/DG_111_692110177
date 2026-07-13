#include <stdio.h>
int main()
{
    int second = 3723;
    int hour, minute, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &second);
    hour = second / 3600;
    minute = (second % 3600) / 60;
    seconds = second % 60;
    printf("Time: %02d:%02d:%02d\n", hour, minute, seconds);
    return 0;
}