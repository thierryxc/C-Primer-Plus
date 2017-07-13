#include<stdio.h>
#define ROWS 3
#define COLS 5

void get_data(double ar[][COLS], int n);
double ave (double ar[], int n);
double ave_all(double ar[][COLS], int n);
double max (double ar[][COLS], int n);
void show_res(void);

int main(void)
{
	
    show_res();
    
    return 0;
}

void get_data(double ar[][COLS], int n)
{   
    int i, j;
    double *pt;
    
	printf(" please inter 5 double :");
 	
 	for (i = 0, pt = ar[i]; i < n; i++)
 	{
 		for(j = 0; j < COLS; j++,pt++)
 		    scanf("%lf",pt);//ÊäÈëdouble ÓÃ%lf 
 		if ( i != n - 1)
 		    printf("another 5:");
	 }
}

double ave (double ar[], int n)
{
	int i;
	double sum = 0;
	
	for (i = 0; i < n; i++)
	{
		sum +=ar[i];
	}
	
	return sum / n;
	
}

double ave_all(double ar[][COLS], int n)
{
    int i, j;
    int sum = 0;
 	
 	for (i = 0; i < n; i++)
 		for(j = 0; j < COLS; j++)
 	        sum += ar[i][j];
 	
 	return sum / ( n * COLS);
}

double max (double ar[][COLS], int n)
{
	int i, j;
    double max = ar[0][0];
 	
 	for (i = 0; i < n; i++)
 		for(j = 0; j < COLS; j++)
 		{
 			if (max < ar[i][j])
 			    max = ar[i][j];
		 }
		 
	return max;
}

void show_res(void)
{
	double ar[ROWS][COLS];
	
	get_data(ar,3);
	int i, j;
 	
 	for (i = 0; i < ROWS; i++)
 	{
 		for(j = 0; j < COLS; j++)
 		    printf("%.2f ",ar[i][j]);
 		printf("\n");
	 }
	 
	printf("\nThe ave of each line is:%.2f  %.2f  %.2f\n",ave(ar[0],5),ave(ar[1],5),ave(ar[2],5));
	printf("\nThe ave of all is : %.2f\n",ave_all(ar,3));
	printf("\nMax of all : %.2f\n",max (ar, 3));
	
}










