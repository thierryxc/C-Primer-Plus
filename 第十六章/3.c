#include<stdio.h>
#include<math.h>

#define PI (4*atan(1))
#define RAD (2*PI)/360

int main(void)
{
	double r,angle;
    double x,y;
	puts("Enter r and angle (q to quit):");
	while (scanf("%lf%lf",&r,&angle) == 2)
	{
		x = r * cos(angle * RAD);
		y = r * sin(angle * RAD); 
		printf("(%.2f, %.2f) \n",x,y); 
		puts("Next two (q to quit):");
	}
	
	puts("done.");
	
	return 0;
}

