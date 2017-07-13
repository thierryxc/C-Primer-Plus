#include<stdio.h>
double range( int n,double ar[]);
int main(void)
{
	double array[5] = { 1, 4.2, 5.3, 23.3, 14 };
	
	printf("max of array is %f",range(5,array));
	
	return 0;
}

double range(int n,double ar[])
{
	double max = ar[0];
	double min = ar[0];
	int i;
	
	
	for (i = 0; i < n; i++)
	{
		if (ar[i] > max)
		    max = ar[i];

		if (ar[i] < min)
		    min = ar[i];
		    
	}

	
	return (max - min);
}
