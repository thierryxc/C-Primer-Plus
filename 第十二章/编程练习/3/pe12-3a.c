#include<stdio.h>
#include"pe12-3a.h"
int set_mode(int mode)
{
	
	int pre_mode = 1;
	if ( mode == 1 || mode == 0)
	{

		pre_mode = mode;
	
		return mode;
	}
	else
	{
		if ( pre_mode == 1)
	        printf("Invalid mode specified. Mode 1(US) used.\n");
	    else
	        printf("Invalid mode specified. Mode 2(metric) used.\n");
		return pre_mode;
	}

	
}

void get_info(int mode, float *pd, float *pf)
{
		if (mode == 1)
	{
		printf("Enter distance traveled in miles:");
		scanf("%f",pd);
		printf("Enter fuel consumed in gallons:");
		scanf("%f",pf);
	}
	else
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%f",pd);
		printf("Enter fuel consumed in liters:");
		scanf("%f",pf);
	}
	;
}
void show_info(int mode, float distance, float fuel)
{   
   
	if (mode == 1)
	    printf("Fuel consumption is %.2f miles per gallon.\n", ( distance / fuel ) );
	else
	    printf("Fuel consumption is %.2f liters per 100 km.\n", ( (fuel / distance) * 100 ));
}
