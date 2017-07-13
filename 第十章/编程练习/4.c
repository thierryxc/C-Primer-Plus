#include<stdio.h>
int max( int n,double ar[]);
int main(void)
{
	double array[5] = { 1, 4.2, 5.3, 23.3, 14 };
	
	printf("max of array is %d",max(5,array));
	
	return 0;
}

int max(int n,double ar[])
{
	int max = 0;
	int i;
	
	
	for (i = 0; i < n; i++)
	{
		if (ar[i] > ar[max])
		    max = i;
		    
	}
	
	return max;
}
