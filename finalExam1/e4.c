#include <stdio.h>
//辗转相除法
fmax(int m, int n)
{
    int r;
    r = m % n;
    while (r != 0)
    {
		m = n;
		n = r;
		r = m % n;
    }
    return n;
}

fmin(int m, int n)
{
    // m*n = (m,n)*[m,n]
    //(a,b)表示a,b的最大公约数,[a,b]表示a,b的最小公倍数
    return m * n / fmax(m, n);
}

void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("fmax is:%d\n", fmax(a, b));
    printf("fmin is:%d\n", fmin(a, b));
}
