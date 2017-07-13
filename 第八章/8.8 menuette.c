#include<stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
	int choice;
	//void count(void);不用要 
	
	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
			case 'a':printf("Buy low,sell high.\n");
			         break;
			case 'b':putchar('\a');
			         break;
			case 'c':count();
			         break;
			default:printf("program error!\n");
			        break;
		}
	}
	printf("8888\n");
	
	return 0;
 } 
 
 void count(void)
 {
 	int n,i;
 	
 	printf("Count how far? enter an integer:\n");
 	n = get_int();
 	for (i =1; i <= n; i++)
 	    printf("%d\n",i);
 	while (getchar() != '\n')
 	    continue;
 }

char get_choice(void)
{
	int ch;
	
	printf("enter the letter of your choice:\n");
	printf("a.advice          b.bell\n");
	printf("c.count           q.quit\n");
	ch = get_first();
	while ((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please respond with a,b,c or q.\n");
		ch = get_first();
	}
	
	return ch;
}

char get_first(void)//获得输入的首字母！！ 
{
	int ch;
	
	ch = getchar();
	while (getchar() != '\n')
	    continue;//丢弃首字母之后的 
	
	return ch;
	
}

int get_int(void)
{
	int input;
	char ch;
	
	while (scanf("%d",&input) != 1)
	{
		while ((ch = getchar()) != '\n')
		    putchar(ch);//处理错误数据 
	    printf(" is not a integer.\n");
	    printf("Please enter an integer value:");
	}
	
	return input;
}
