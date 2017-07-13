#include<stdio.h>
#define SINGLE 17850
#define HOST 23900
#define MARRY 29750
#define DIFORCE 14875
#define TAX_1 0.15
#define TAX_2 0.28
int main(void)
{
	int choice;
	float salary,pay,tax;
	
	printf("choice your class:\n");
	printf("1.single\n2.host\n3.marry\n4.diforce\n");
	scanf("%d",&choice);
	printf("what's your salary:");
	scanf("%f",&salary);
	while(choice > 0 && choice < 5){
	
	switch(choice)
	{
		case 1:
			pay = SINGLE;
			break;
		case 2:
			pay = HOST;
			break;
		case 3:
			pay = MARRY;
			break;
		case 4:
			pay = DIFORCE;
			break;
		
			
	}
	
	if (salary < pay)
	    tax = salary * TAX_1;
	else
	    tax = pay * TAX_1 + (salary - pay) * TAX_2;
	    
	    
	printf("tax:%.2f\n\n",tax);
	printf("choice your class:\n");
	printf("1.single\n2.host\n3.marry\n4.diforce\n");
	scanf("%d",&choice);
	printf("what's your salary:");
	scanf("%f",&salary);

}
	printf("your input wrong num 886");
	
	return 0;
}
