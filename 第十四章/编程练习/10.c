#include<stdio.h>

double half(double);
double twice(double); 

int main(void)
{
	double val;
	double (*pt[2])(double) = { half, twice };
	double ans;
	int sel;
	
	puts("Enter a number:");
	while (scanf("%lf",&val) == 1)
	{
		puts("Enter the mode:");
		puts("0.half    1.twice");
		scanf("%d",&sel);
		ans = (*pt[sel])(val);
		printf("ans = %.2f\n",ans);
		puts("Enter a number:");
		
	}
	
	puts("done.");
	
 } 
 
 double half(double x)
 {
 	return x / 2;
 }
 
 double twice(double x)
 {
 	return 2 * x;
 }
