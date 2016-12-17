#include <stdio.h>
#define N 5
void in(char x[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        x[i][i] = '%';
        for (j = i + 1; j < N; j++)
        {
            x[i][j] = '$';
            x[j][i] = '0';
        }
    }
}

void out(char x[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%3c", x[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    char a[N][N];
    in(a);
    out(a);
}
