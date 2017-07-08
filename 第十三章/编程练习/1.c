#include<stdio.h>
#include<stdlib.h>
#define SLEN 20

int main(void)
{
	char name[SLEN];
	char ch;
	unsigned long count = 0;
	FILE *fp;
	
	printf("Enter the file name:");
	scanf("%s",name);
	
	if ((fp = fopen(name,"r")) == NULL)
	{
		printf("Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	printf("\nFile %s has %lu characters\n",name, count);
	
	return 0;

}
