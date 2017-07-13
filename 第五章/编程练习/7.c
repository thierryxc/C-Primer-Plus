#include<stdio.h>
void lifang(double n);
int main(void)
{
	double n;
	
	printf("enter a numb:");
	scanf("%lf",&n);
	
	lifang(n);
	
	return 0; 
}

void lifang(double n)
{
	 double n3;
	 n3 = n * n * n;
	 printf("%1.2f",n3);
}
