//ʹ��fprintf������fscanf��������rewind����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41

int main(void)
{
	FILE *fp;
	char words[MAX];
	
	if ((fp = fopen("wordy", "a+")) == NULL)//ʹ��aģʽ�ɶ��ļ����ж�д 
	{
		fprintf(stdout, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	 } 
	
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	    fprintf(fp,"%s\n", words);//�ѵ��ʼӻ��з�д��fpָ���λ�� 
	    
	puts("File contents:");
	rewind(fp);//�ص��ļ���ʼ�� 
	while (fscanf(fp, "%s", words) == 1)//��fpָ���λ�ö�ȡ�ַ�������words�ڣ��������з�����һ���� 
	    puts(words);
	puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file.\n");
        
    return 0;
 } 
