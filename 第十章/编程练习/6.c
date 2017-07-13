#include<stdio.h>
void show_ar(int n, double ar[]);
void fan(int n ,double ar[]);
int main(void)
{
	double array[5] = { 1, 4.2, 5.3, 23.3, 14 };
	
	show_ar(5,array);
	fan(5,array);
	printf("\n");
	show_ar(5,array);
	
	return 0;
}

void show_ar(int n, double ar[])
{
	int i = 0;
	
	for (i = 0; i < n; i++)
	    printf("%.2f  ",ar[i]);
}

void fan(int n ,double ar[])
{
	double *pt;
	int i;
	double ar1[n];
	
	pt = ar + n -1;
	for (i = 0; i < n; i++)
	   {
		ar1[i] = *pt ;
	    pt--;
	}
	for (i = 0; i < n; i++)
		ar[i] = ar1[i] ;
	
	
}
