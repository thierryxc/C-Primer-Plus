//���ļ�ѹ��Ϊԭ����1/3
#include<stdio.h>
#include<stdlib.h>  //�ṩexit()ԭ��
#include<string.h>  //�ṩstrcpy(),strcat()��ԭ��
#define LEN 40

int main(void)
{
	FILE *in, *out; //��������ָ��FILE��ָ��
	int ch;
	char name[LEN];
	int count = 0;
	char file_app[LEN];
	
    puts("Enter the file name to be reduced:");
    scanf("%s",file_app);
	//��������
	if ((in = fopen(file_app, "r")) == NULL)
	
	{
		fprintf(stderr, "I coundn't open the file \"%s\"\n",file_app);
		exit(EXIT_FAILURE);
	 } 
	 
	//�������
	strncpy(name, file_app,LEN - 5);//�����ļ���
	name[LEN - 5] = '\0';
	strcat(name, ".red");
	if ((out = fopen(name, "w")) == NULL)
	{
		//��дģʽ���ļ�
		fprintf(stderr, "can't create output file.\n");
		exit(3);//ֻҪ��������0�����쳣�˳� 
	 } 
	//��������
	while ((ch = getc(in)) != EOF)
	    if (count++ % 3 == 0)
		    putc(ch, out);//��ӡ3���ַ��еĵ�һ��
	//��β����
	if (fclose(in) != 0 || fclose(out) != 0)
	    fprintf(stderr,"Error in close files.\n");
		
	return 0; 
 } 
