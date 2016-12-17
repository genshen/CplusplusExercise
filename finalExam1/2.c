#include <stdio.h>
main()
{
    int a = 1, b = 2, c = 3, d = 0;
    if (a == 1)
	if (b != 2)
	    if (c != 3)
			d = 1;
	    else
			d = 2;
	else if (c != 3)
	    d = 3;
	else
	    d = 4;
    else
		d = 5;
    printf("%d\n", d);
}
