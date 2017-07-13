#include<stdio.h>
#include<stdbool.h>
#define A1 2.05
#define B1 1.15
#define C1 1.09
int main(void)
{
	int w,w1,w2,w3;
	float price = 0;
	w = w1 = w2 = w3 = 0;
	char choice;
	int w0;
	float trans = 0;
	bool cut = false;
	
	printf("what will you buy?\n");
	printf("a.A  b.B c.C q.QUIT\n");
	scanf("%c",&choice);
	
	while(choice != 'q')
	{
		    
			   
		switch(choice)
		{
			case 'a':
				printf("enter how much will you buy :");
				scanf("%d",&w0);
				w1 += w0;
				break;
			case 'b':
				printf("enter how much will you buy :");
				scanf("%d",&w0);
				w2 += w0;
				break;
		    case 'c':
				printf("enter how much will you buy :");
				scanf("%d",&w0);
				w3 += w0;
				break;	
			
		}
		
		printf("what will you buy?\n");
	    printf("a.A  b.B c.C q.QUIT\n");
	    scanf("%c",&choice);
	} 		
	}
	price = w1 * A1 + w2 * B1 + w3 * C1;
	
	if (price > 100){
	    price =price * 0.95;
	    cut = true;
		}
	
	w = w1 + w2 + w3;
	
	if (w <= 5)
	    trans = 6.5;
	else if (w <= 20)
	    trans = 14;
	else
	    trans = 14 + (w - 20) * 0.5;
	    
	
	printf("your order:\n ");
	printf("1.A %5.2f%5d%10.2f\n2.B %5.2f%5d%10.2f\n3.C %5.2f%5d%10.2f\n",A1,w1,A1*w1,B1,w2,B1*w2,C1,w3,C1*w3);
	if(cut)
	    printf("you have a 5\% cut!\n");
	printf("price:%.2f\ntrans:%.2f\nTotal:%.2f\n",price,trans,price+trans);
	
	return 0;
	
}
