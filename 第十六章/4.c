#include<stdio.h>
#include<time.h>

int main(void)
{
	double time;
	clock_t t;
	puts("Enter the time:");
	scanf("%lf",&time);
	t = clock();
	while (((double)(t + clock()))/CLOCKS_PER_SEC < time)
	    continue;
	    
	return 0;
}
