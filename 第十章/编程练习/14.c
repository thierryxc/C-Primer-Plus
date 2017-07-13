#include<stdio.h>
#define ROWS 3
#define COLS 5

void get_data(int m, int n, double ar[m][n]);
double ave (int n, double ar[]);
double ave_all(int m, int n, double ar[m][n]);
double max (int m, int n, double ar[m][n]);
void show_res(void);

int main(void)
{
	
    show_res();
    
    return 0;
}

void get_data(int m, int n, double ar[m][n])
{   
    int i, j;
    double *pt;
    
	printf(" please inter 5 double :");
 	
 	for (i = 0, pt = ar[i]; i < m; i++)
 	{
 		for(j = 0; j < n; j++,pt++)
 		    scanf("%lf",pt);//ÊäÈëdouble ÓÃ%lf 
 		if ( i != m - 1)
 		    printf("another 5:");
	 }
}

double ave (int n, double ar[n])
{
	int i;
	double sum = 0;
	
	for (i = 0; i < n; i++)
	{
		sum +=ar[i];
	}
	
	return sum / n;
	
}

double ave_all(int m, int n, double ar[m][n])
{
    int i, j;
    int sum = 0;
 	
 	for (i = 0; i < m; i++)
 		for(j = 0; j < n; j++)
 	        sum += ar[i][j];
 	
 	return sum / ( n * m );
}

double max (int m, int n, double ar[m][n])
{
	int i, j;
    double max = ar[0][0];
 	
 	for (i = 0; i < m; i++)
 		for(j = 0; j < n; j++)
 		{
 			if (max < ar[i][j])
 			    max = ar[i][j];
		 }
		 
	return max;
}

void show_res(void)
{
	double ar[ROWS][COLS];
	
	get_data(3,5,ar);
	int i, j;
 	
 	for (i = 0; i < ROWS; i++)
 	{
 		for(j = 0; j < COLS; j++)
 		    printf("%.2f ",ar[i][j]);
 		printf("\n");
	 }
	 
	printf("\nThe ave of each line is:%.2f  %.2f  %.2f\n",ave(5,ar[0]),ave(5,ar[1]),ave(5,ar[2]));
	printf("\nThe ave of all is : %.2f\n",ave_all(3,5,ar));
	printf("\nMax of all : %.2f\n",max (3,5,ar));
	
}
