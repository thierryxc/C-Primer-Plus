//��ʾ���û�����
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4//����һ�������������ܶ�
int main(void)
{
	float weight,volume;
	int size,letters;
	char name[40];//����Ϊ40������
	
	printf("hi, what's your first name?\n");
	scanf("%s",name);//�ַ������� & 
	printf("%s,what's your weight in pounds?",name);
	scanf("%f",&weight);
	
	size = sizeof(name);//�����С 
	volume = weight / DENSITY;
	letters = strlen(name);//�ֶ������� 
	
	printf("%s,you are %2.2f cubic feet\n",name,volume);
	printf("your first name has %d letters\n",letters);
	printf("and we have %d bytes to store it",size);
	
	return 0;
	
 } 
