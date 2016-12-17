#include <stdio.h>
void xyz(int m)
{
    int j, k;
    for (j = 0; j < m; j++)
    {
        printf(" ");
    }
    for (k = 0; k < 9 - 2 * m; k++)
    {
        printf("%c", '0' + 5 - m);
    }
    printf("\n");
}
void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        xyz(i);
    }
}