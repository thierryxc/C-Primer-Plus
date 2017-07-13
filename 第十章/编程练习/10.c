#include<stdio.h>
void add_up(int n,int const ar1[],int const ar2[],int ar3[]);

int main(void)
{
    int ar1[4] = { 1, 2, 3, 4 };
    int ar2[4] = { 4, 3, 2, 1 };
    int ar3[4];
    int i;
    
    add_up(4,ar1,ar2,ar3);
	
	for (i = 0; i < 4; i++)
	    printf("%d ",ar3[i]);
		
	return 0;	
}

void add_up(int n,int const ar1[],int const ar2[],int ar3[])
{
	int *pt1, *pt2;
	pt1 = ar1;
	pt2 = ar2;
	int i;
	
	for (i = 0; i < 4; i++)
    {
    	ar3[i] = *pt1 + *pt2;
    	pt1++;
    	pt2++;
	}
}
