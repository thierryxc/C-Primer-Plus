#include<stdio.h>
char get_choice(void);
char get_first(void);
float get_float(void);

int main(void)
{
	int chioce;
	float a , b;
	
	while ((chioce = get_choice()) != 'q')
	{
		switch (chioce)
		{
			case 'a':
			    printf("enter the first num:\n");
			    a = get_float();
			    printf("enter the sec num:\n");
			    b = get_float();
			    printf("%f + %f = %f\n",a,b,a + b);
			    break;
            case 's':
			    printf("enter the first num:\n");
			    a = get_float();
			    printf("enter the sec num:\n");
			    b = get_float();
			    printf("%f - %f = %f\n",a,b,a - b);
				break;			       
			case 'm':
			    printf("enter the first num:\n");
			    a = get_float();
			    printf("enter the sec num:\n");
			    b = get_float();
			    printf("%f * %f = %f\n",a,b,a * b);
			    break;
			case 'd':
			    printf("enter the first num:\n");
			    a = get_float();
			    printf("enter the sec num:\n");
			    while((b = get_float()) == 0)
			    {
			    	printf("enter a num other than 0:\n");
				}
			    
			    printf("%f + %f = %f\n",a,b,a / b);	
			    break;
		}
		
	 } 
	printf("888");
	
	
}

char get_first(void)
{
	int ch;
	
	ch = getchar();
	while(getchar() != '\n')
	    continue;
	
	return ch;
} 

char get_choice(void)
{
	char ch;
	
	printf("Enter the op of your choice:\n");
	printf("a.add         s.subtract\n");
	printf("m.multiply    d.divide\n");
	printf("q.quit\n");
	
	ch=get_first();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q' )
	{
		printf("must input a,s,m,d or q.\n");
		ch=get_first();
		
	}
	
	return ch;
	
}

float get_float(void)
{
	float input;
	char ch;
	
	while (scanf("%f",&input) != 1)
	{
		while ((ch =getchar()) != '\n')
		    putchar(ch);
		printf(" is not a num.\nenter a num like 5.2,50 or 45:");
		
	}
	return input;
}






