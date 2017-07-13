#include<stdio.h>
void Temperatures(double n);
int main(void)
{
	double t;
	
	printf("enter a t:");
	
	while (scanf("%lf",&t)==1)
	{
		Temperatures(t);
		printf("enter a t:");
	  
	}
	printf("88");
	
	return 0;
}

void Temperatures(double n)
{
	printf("huashi:%1.2f\nsheshi:%1.2f\nkaishi:%1.2f\n",n,5.0 / 9.0 * (n - 32.0),(5.0 / 9.0 * (n - 32.0))+273.16);
}

