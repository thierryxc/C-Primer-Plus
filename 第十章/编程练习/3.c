#include<stdio.h>
int max( int n,int ar[]);
int main(void)
{
	int array[5] = { 1, 4, 5, 23, 14 };
	
	printf("max of array is %d",max(5,array));
	
	return 0;
}

int max(int n,int ar[])
{
	int max = ar[0];
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (ar[i] > max)
		    max = ar[i];
	}
	
	return max;
}
