#include<stdio.h>
void output(char ch,int r,int c);

int main(void)
{
	char ch;
	int i ,j;
	
	printf("enter a char:");
    scanf("%c",&ch);
	printf("enter rows and cols :");
	scanf("%d %d",&i,&j);
	output(ch,i,j);
	putchar('\n');

	


    printf("done.\n");
    
    return 0;
}

void output(char ch,int r,int c)
{
	int i ,j;
	
	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < c ; j++)
		    putchar(ch);
		putchar('\n');
	}
}
