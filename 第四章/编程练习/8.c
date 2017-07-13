#include<stdio.h>
#define J_S 3.875
int main(void)
{
	const float Y_KM = 1.609;
	float oil,yingli;
	
	printf("enter your oil and yingli:");
	scanf("%f%f",&oil,&yingli);
	printf("%.1f yingli/jialun\n",yingli/oil);
	printf("%.1f l/100km",(oil*J_S)/(Y_KM*yingli/100));
	
	return 0;
}
