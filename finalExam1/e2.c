#include <stdio.h>
void main()
{
    char b[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int c[64], d, i, base;
    long n;
    printf("Input a number:\n");
    scanf("%ld", &n);
    printf("Input new base(2-16):\n");
    scanf("%d", &base);

    i = 0;
    do
    {
		c[i] = n % base;
		i++;
		n /= base;
    } while (n != 0);
	
    printf("Transmite new base:\n");
    for (--i; i >= 0; --i)
    {
		d = c[i];
		printf("%c", b[d]);
    }
    printf("\n");
}
