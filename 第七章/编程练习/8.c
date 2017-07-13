#include<stdio.h>
#define SALARY_1 8.75
#define SALARY_2 9.33 
#define SALARY_3 10.00 
#define SALARY_4 11.20
#define TAX_1 0.15
#define TAX_2 0.2
#define TAX_3 0.25

int main(void)
{
	int choice,time;
	float salary = 0;
	float tax = 0;
	float profit = 0;
	float pay;
	
	while(1)
	{
		printf("enter the numb of pat rate:\n");
		printf("1) $8.75       2) $9.33\n");
		printf("3) $10.00      4) $11.20\n");
		printf("5) quit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				pay = SALARY_1;
				break;
			case 2:
				pay = SALARY_2;
				break;
			case 3:
				pay = SALARY_3;
				break;
			case 4:
				pay = SALARY_4;
				break;
			case 5:
				break;
				
		}
		if (choice >= 1 && choice <= 5 )
		    break;
		printf("enter the right chioce!!!\n");
	}
	
	printf("enter the time you work:");
	scanf("%d",&time);
	
	
	
	if (time <= 40)
	    salary = pay * time;
	else
	    salary = pay * 40 + pay * (time - 40) * 1.5;

	if (salary <= 300)
	    tax = salary * TAX_1;
	else if (salary <= 450)
	    tax = 300 * TAX_1 + (salary - 300) * TAX_2;
	else
	    tax = 300 * TAX_1 + 150 * TAX_2 + (salary - 450) * TAX_3;
	profit = salary - tax;
	
	printf("s:%.2f\nt:%.2f\np:%.2f\n",salary,tax,profit);
	
	return 0;   
   }   



