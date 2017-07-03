#include<stdio.h>
#define SIZE 21
char * word_list(int n);
void show_word(const char ar[][SIZE], int n);
int main(void)
{
	char *pt;
	int n;
	
	
	printf("How many words do you wish to enter? ");
	while ( scanf("%d",&n) == 1 && n > 0)
	{   
	    printf("Enter %d words now:\n",n);
		pt = word_list(n);
		if(pt)
		{
			show_word(pt ,n);
			free(pt);
		}
	    printf("How many words do you wish to enter?(q to quit) ");
	}
}

char * word_list(int n)
{
	int i = 0;
	int j = 0;
	char ch;
	char (*st)[SIZE];
	
	st = (char (*)[SIZE]) malloc (n * SIZE * sizeof(char));
	
	while (getchar() != '\n')//前面输入中存在多余字符 
	    continue;
	
	while ((ch = getchar()) != EOF && i < n && ch != '\n')
	{
		if(!isblank(ch))
		{
		    st[i][j] = ch;
		    j++;
	    }
		else
		{
			st[i][j] = '\0';
		    i++;
		    j = 0;
	    }
	}
	
	return st;    
}

void show_word(const char ar[][SIZE], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	    puts(ar[i]);
}
