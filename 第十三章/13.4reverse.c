//������ʾ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#define CNTL_Z '/032'
#define SLEN 81

int main(void)
{
	char file[SLEN];
	char ch;
	FILE *fp;
	long count, last;
	
	puts("Enter the name of the file to be processed:");
	scanf("%80s",file);
	if ((fp = fopen(file, "rb")) == NULL)
	{
		printf("reverse can't open %s\n", file);
		exit(EXIT_FAILURE);
	}
	
	fseek(fp, 0L, SEEK_END);//��λ���ļ�ĩβ 
	last = ftell(fp);//����һ��long���͵�ֵ����ʾ�ļ��еĵ�ǰλ�� 
	for (count = 1L; count <= last; count++)
	{
		fseek(fp, -count, SEEK_END);//���ļ�ĩβ����count��λ�� 
		ch = getc(fp);
		if (ch != CNTL_Z && ch !='\r')
		    putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	
	return 0;
 } 
