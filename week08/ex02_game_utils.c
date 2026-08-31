#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int clamp(int value, int min, int max)
{
    if (value < min)
        return min;
    else if (value > max)
        return max;
    else
        return value;
}
float lerp(float a, float b, float t)
{
    float result = a + (b - a) * t;
    return result;
}
int randomRange(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
float percentOf(int current, int total)
{
    if (total == 0)
        return 0.0f; // ป้องกันการหารด้วยศูนย์
    return ((float)current / total) * 100.0f;
}

int main(void)
{
    // 2.1 clamp

    int hp = 150;
    int safeHP = clamp(hp, 0, 100);
    printf("hp เดิม = %d\n", hp);
    printf("safeHP = %d\n", safeHP);

    // 2.2 lerp
    float pos = lerp(0, 100, 0.5f);
    printf("pos = %.2f\n", pos);
    float t = 0.5f;
    printf("t = %.2f\n", t);

    // 2.3 randomRange
    int dicemin = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("dice roll = %d\n", randomRange(dicemin, 6));
    }
    printf("diceMin original=%d\n", dicemin);
    // 2.4 percentOf
    int score = 35, total = 100;
    float percent = percentOf(score, total);
    printf("score/total เดิม = %d/%d\n", score, total);
    printf("percent = %.1f%%\n", percent);

    return 0;
}
