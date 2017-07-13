#include<stdio.h>
void copy_arr(double ar1[],double ar2[],int n);
void copy_ptr(double ar1[],double ar2[],int n);
void copy_ptrs(double ar1[],double ar2[],double ar3[]);

int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	int i;
	
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,source+5);
	
	for (i = 0; i < 5; i++)
	    printf("%.1f %.1f %.1f\n",target1[i],target2[i],target3[i]);
	    
	return 0;
	
 } 
 
 void copy_arr(double ar1[],double ar2[],int n)
 {
 	int i;
 	
 	for (i = 0; i < 5; i++)
 	    ar1[i] = ar2[i];
 	
 }
 
 void copy_ptr(double ar1[],double ar2[],int n)
 {
 	double *pt,*pt1;
 	pt = ar2;
 	pt1 = ar1;
 	int i;
 	
 		for (i = 0; i < 5; i++)
 		   {
 		   	*pt1 = *pt;
 		   	pt1++;
 		   	pt++;
			}
 	
 	
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
 
 
