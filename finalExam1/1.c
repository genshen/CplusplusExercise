#include <stdio.h>
int a = 2;
void count(int b, int c)
{
    int m;
    static int n = 4;
    a = a + 1;
    m = a + b;
    n = n + c;
    printf("%d,%d\n", m, n);
}

void main()
{
    int b = 1, c = 2;
    {
	int a = 3, c = 4;
	count(a, c);
    }
    count(b, c);
}
