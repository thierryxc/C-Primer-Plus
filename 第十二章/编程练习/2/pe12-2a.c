#include<stdio.h>
#include"pe12-2a.h"
int pm,pre_pm;
float distance, fuel;
int set_mode(int m)
{
	if ( m == 1)
	{
	    pm = 1;
	    pre_pm = 1;
	}
	else if ( m == 0)
	{
	    pm =0;
	    pre_pm = 0;
    }
	else
	{
	    pm = pre_pm;
	    if (pm == 1)
	        printf("Invalid mode specified. Mode 1(US) used.\n");
	    else
	        printf("Invalid mode specified. Mode 2(metric) used.\n");
    }
}

void get_info(void)
{   
	if (pm == 1)
	{
		printf("Enter distance traveled in miles:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%f",&fuel);
	}
	else
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%f",&distance);
		printf("Enter fuel consumed in liters:");
		scanf("%f",&fuel);
	}
}

void show_info(void)
{
	if (pm == 1)
	    printf("Fuel consumption is %.2f miles per gallon.\n", ( distance / fuel ) );
	else
	    printf("Fuel consumption is %.2f liters per 100 km.\n", ( (fuel / distance) * 100 ));
}

