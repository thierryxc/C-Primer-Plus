#include<stdio.h>
void copy_arr(double ar1[],double ar2[],int n);
void copy_ptr(double ar1[],double ar2[],int n);
void copy_ptrs(double ar1[],double ar2[],double ar3[]);

int main(void)
{
	double source[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };

	double target3[3];
	int i;
	

	copy_ptrs(target3,source+2,source+5);
	
	for (i = 0; i < 3; i++)
	    printf("%.1f\n",target3[i]);
	    
	return 0;
	
 } 
 

 	
 	

 
 void copy_ptrs(double ar1[],double ar2[],double ar3[])
 {
 	double *pt,*pt1,*pt2;
 	pt = ar2;
 	pt1 = ar1;
 	pt2 = ar3;
 	
 	while (pt != pt2)
 	{
 		   	*pt1 = *pt;
 		   	pt1++;
 		   	pt++;
			}
 	
 	
 }
