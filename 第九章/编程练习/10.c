
#include<stdio.h>
void to_base(unsigned long m,int n);

int main(void)
{
	unsigned long number;
	int ox;
	printf("Enter an integer(q to quit) and a num in 2~10:\n");
	while(scanf("%lu%d",&number,&ox) == 2 &&(ox >= 2 && ox <= 10))
	{
		printf("equivalent:");
		to_base(number,ox);
		putchar('\n');
			printf("Enter an integer(q to quit):\n");
	}
	
	printf("Done.\n");
	
	return 0;
 } 
 
 void to_base(unsigned long m,int n)
 {
 	int r;
 	
 	r = m % n;//n����2���������Ƕ������ұߵ�һλ 
 	if (m >= n)
 	    to_base(m / n,n);//���n���ڵ���2�ʹ������ֿ�ʼ���ú������Ȳ�ִ����һ�� ��ֻ��nС��2ʱ��ʼ�����λ���δ�ӡ 
 	printf("%d",r);
 	
 	return;
 }
