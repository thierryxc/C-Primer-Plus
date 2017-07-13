#include<stdio.h>
void copy_arr(double ar1[],double ar2[],int n);


int main(void)
{
	double source[2][5] = { { 1.1, 2.2, 3.3, 4.4, 5.5 }, { 1.2, 2.3, 3.4, 4.5, 5.6 } };
	double target1[2][5];

	int i,j;
	
	copy_arr(target1[0],source[0],5);
	copy_arr(target1[1],source[1],5);
	
	for (i = 0; i < 2; i++)
	   for( j = 0; j < 5; j++)
	    printf("%.1f  ",target1[i][j]);
	    
	return 0;
	
 } 
 
 void copy_arr(double ar1[],double ar2[],int n)
 {
 	int i;
 	double *pt;
 	pt = ar2;
 	
 	for (i = 0; i < n; i++)
 	   {
		ar1[i] = *pt;
 	    pt++;
 }
 }
 
 
