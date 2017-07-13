#include<stdio.h>
void show_arr(int m, int n, double ar[m][n]);
void copy_arr(int m, int n, double ar1[m][n], double ar2[m][n]);

int main(void)
{
	double arr[2][3] = { { 1.1, 2.2, 3.3 }, { 4.4, 5.5, 6.6 } };
	double array[2][3];
	
	show_arr(2, 3, arr);
	copy_arr(2, 3, arr, array);
	printf("\n");
	show_arr(2, 3, array);
	
	return 0;
	
 } 
 
 void show_arr(int m, int n, double ar[m][n])
 {
 	int i, j;
 	
 	for (i = 0; i < m; i++)
 	{
 		for(j = 0; j < n; j++)
 		    printf("%.2f ",ar[i][j]);
 		printf("\n");
	 }
 }
 
void copy_arr(int m, int n, double ar1[m][n], double ar2[m][n])
 {
 	int i, j;
 	
 	for (i = 0; i < m; i++)
 	{
 		for(j = 0; j < n; j++)
 		   ar2[i][j] = ar1[i][j];
	 }
 }
