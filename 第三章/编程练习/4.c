#include<stdio.h>
int main(void)
{
	float x;
	
	printf("enter a float:");
	scanf("%f",&x);
	printf("fixed-point: %f\n",x);
	printf("expoential: %e\n",x);
	printf("p: %a\n",x);
	
	return 0;
}
