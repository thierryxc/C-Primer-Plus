#include<stdio.h>
int main(void)
{
	float cup;
	
	printf("enter your numb of cups:");
	scanf("%f",&cup);
	printf("pintuo:%f\nangsi:%f\ndashao:%f\nxiaoshao:%f\n",cup/2,cup*8,cup*16,cup*48);
	
	return 0;
}
