#include<stdio.h>
#define SALARY_1 8.75
#define SALARY_2 9.33 
#define SALARY_3 10.00 
#define SALARY_4 11.20
#define TAX_1 0.15
#define TAX_2 0.2
#define TAX_3 0.25
char get_first(void);

int main(void)
{
	int time;
	float salary = 0;
	float tax = 0;
	float profit = 0;
	float pay;
	char choice;
	
	while(1)
	{
		printf("enter the numb of pat rate:\n");
		printf("a) $8.75       b) $9.33\n");
		printf("c) $10.00      d) $11.20\n");
		printf("q) quit\n");
		
		choice = get_first();
		
		switch(choice)
		{
			case 'a':
				pay = SALARY_1;
				break;
			case 'b':
				pay = SALARY_2;
				break;
			case 'c':
				pay = SALARY_3;
				break;
			case 'd':
				pay = SALARY_4;
				break;
			case 'q':
				break;
				
		}
		if (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd' || choice == 'q')
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
   
char get_first(void)
{
	int ch;
	
	ch = getchar();
	while(getchar() != '\n')
	    continue;
	
	return ch;
} 



