#include <stdio.h>
void MaxCommonFactor(int a, int b);
int maxshu;

void main()
{
    int a, b;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b); //your input muse be like this(notice that comma','):9,15
    MaxCommonFactor(a, b);
    printf("%d\n", maxshu);
}

void MaxCommonFactor(a, b)
{
    int i;
    for (i = 1; i < (a < b ? a : b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            maxshu = i;
        }
    }
}
