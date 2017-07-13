#include<stdio.h>
#include<float.h>
int main(void)
{
	double x = 1.0/3.0;
	float y = 1.0/3.0;
	
	printf("%.6f %.6f\n%.12f %.12f\n%.16f %.16f\n",x,y,x,y,x,y);
	printf("%d %d",FLT_DIG,DBL_DIG);
	
	return 0;
 } 
