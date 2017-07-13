#include<stdio.h>
#define ROWS 3
#define COLS 5
void show_arr(int ar[][COLS], int n);
void double_arr(int ar[][COLS], int n);
int main(void)
{
	int arr[ROWS][COLS] = 
	{
	  { 1, 2, 3, 4, 5 },
	  { 1, 2, 3, 4, 5 },
	  { 1, 2, 3, 4, 5 }
	};
	
	show_arr(arr, 3);
	double_arr(arr, 3);
	printf("\n");
	show_arr(arr, 3);
	
	return 0;
}

void show_arr(int ar[][COLS], int n)
{
    int i, j;
 	
    for (i = 0; i < n; i++)
 	{
 		for(j = 0; j < COLS; j++)
 		    printf("%.d ",ar[i][j]);
 		printf("\n");
	 }	
}

void double_arr(int ar[][COLS], int n)
{
	int i ,j;
	
	for (i = 0; i < n; i++)
 		for(j = 0; j < COLS; j++)
 		    ar[i][j] *= 2;
}
