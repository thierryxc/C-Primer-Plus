#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 40
#define NUMB 20
void pick(int ar[],int n,int m);

int main(void)
{
	int arr[SIZE];
	int i;
	char ch;
	
	for ( i = 0; i < SIZE; i++)
	    arr[i] = i + 1;
    do{
	    pick(arr,SIZE,NUMB);
	    puts("again?<y/n>");
	    ch = getchar();
	    while (getchar() != '\n')
	        continue;
	} while (ch == 'y');
	
	puts("done.");
	
	return 0;
	
}

void pick(int ar[],int n,int m)
{
	int index,i,temp;
	
	srand((unsigned int) time(0));
	
	if (m > n)
    {
        fputs("Number of picks > array size\n", stderr);
        fputs("Setting picks = array size\n", stderr);
        m = n;
    }
    for ( i = 0; i < m;i++)
    {
    	index = rand() % (n - 1);
    	temp = ar[index];
    	printf("%d  ",temp);
    	if (i % 10 == 9)
		    putchar('\n');
		ar[index] = ar[n - 1];
		ar[n - 1] = temp;
		n--;	 
	}
	 putchar('\n');
}

