#include<stdio.h>
#include<stdlib.h>
void sort(int * pt, int n);

int main(void)
{
	int ar[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		ar[i] = rand() % 10 + 1;
	}
	sort(ar, 100);
	for (i = 0; i < 100; i++)
	    printf("%d ",ar[i]);
	printf("\n");
	
	return 0;
}

void sort(int *ar, int n)//*ar也可以是ar[] 
{
	int seek;
	int temp;
	int i,j;
	
	for (i = 0; i < n - 1; i++)
	    for (j = i; j < n; j++)
	    {
	    	if (ar[i] < ar[j])
	    	{
	    		temp = ar[i];
	    		ar[i] = ar[j];
				ar[j] = temp; 
			}
		}
}
