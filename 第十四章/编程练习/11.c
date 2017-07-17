#include<stdio.h>
#include<math.h>

void transform(double src[], double app[], int n, double (*pt)(double x));

int main(void)
{
	double src[10];
	double app[10];
	double (*pt)(double) = sqrt;
	int i;
	
	for (i = 0; i < 10; i++)
	    src[i] = 9;
	
	transform(src, app, 10, sqrt);
	
	for (i = 0; i < 10; i++)
	    printf("%.2f\n",app[i]);
	    
	return 0;
}

void transform(double src[], double app[], int n, double (*pt)(double x))
{
	int i;
	for (i = 0; i < n; i++)
	    app[i] = (*pt)(src[i]);
}
