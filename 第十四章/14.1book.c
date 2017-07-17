//一本书的图书目录
#include<stdio.h>
#include<string.h>
char * s_gets(char *st, int n);
#define MAXTITL 41
#define MAXAUTL 31

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};  //结构模板

int main(void)
{
	struct book library; //把library声明为一个 book 类型变量
	
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL); //访问title部分
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f",&library.value);
	printf("%s by %s: $%.2f\n",library.title, library.author, library.value);
	
	puts("Done!");
	
	return 0; 
 } 
 
char * s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st,'\n');
		if (find)
		    *find = '\0';
		else
		    while (getchar() != '\n')
		        continue;
		        
	}
	return ret_val;
}
