#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SLEN 200

int main(void)
{
	char name[SLEN];
	char str[SLEN];
	FILE *fp;
	char *pt;
	pt = str;
	
	printf("Enter the file name:");
	scanf("%s",name);
	
	if ((fp = fopen(name,"r")) == NULL)
	{
		printf("Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	fgets(str,200,fp);
	fclose(fp);
	while(*pt)
	{
		*pt = toupper(*pt);

	    pt++;
	}
		if ((fp = fopen(name,"w")) == NULL)
	{
		printf("Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	fputs(str,fp);
	fclose(fp);	
	
	return 0;

}
