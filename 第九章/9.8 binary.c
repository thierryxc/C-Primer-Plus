//�Զ�������ʽ��ӡʮ������
#include<stdio.h>
void to_binary(unsigned long n);

int main(void)
{
	unsigned long number;
	printf("Enter an integer(q to quit):\n");
	while(scanf("%lu",&number) == 1)
	{
		printf("Binary equivalent:");
		to_binary(number);
		putchar('\n');
			printf("Enter an integer(q to quit):\n");
	}
	
	printf("Done.\n");
	
	return 0;
 } 
 
 void to_binary(unsigned long n)
 {
 	int r;
 	
 	r = n % 2;//n����2���������Ƕ������ұߵ�һλ 
 	if (n >= 2)
 	    to_binary(n / 2);//���n���ڵ���2�ʹ������ֿ�ʼ���ú������Ȳ�ִ����һ�� ��ֻ��nС��2ʱ��ʼ�����λ���δ�ӡ 
 	putchar(r == 0 ? '0' : '1');
 	
 	return;
 }
