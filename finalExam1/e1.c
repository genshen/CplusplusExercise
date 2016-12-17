#include <stdio.h>
void main()
{
    float aver;
    int m, score, maxs, mins, sum;
    scanf("%d", &score);
    maxs = mins = score;
    sum = 0;
    m = 0;
    while (score >= 0)
    {
	sum = sum + score;
	m++;
	if (score > maxs)
	    maxs = score;
	if (score < mins)
	{
	    mins = score;
	}
	scanf("%d", &score);
    }
    aver = sum / m;
    printf("%d,%d,%d,%.2f\n", m, maxs, mins, aver);
}
