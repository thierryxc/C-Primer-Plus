//���ַ�ʽ�������ݽṹ����Ϣ
#include<stdio.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
}; 

double sum_a(double, double); //�ѽṹ��Ա��Ϊ��������

double sum_b(const struct funds *);//����ָ��ṹ��ָ��

double sum_c(struct funds moolah);//����һ���ṹ 

int main(void)
{
	struct funds stan = { //��ʼ���ṹ
	    "Garlic-Melon Bank",
		4302.27,
		"Lucky's Savings and Loan",
		8543.94 
	};
	
	printf("Stan has a total of $%.2f.\n", sum_a(stan.bankfund, stan.savefund));
	
	printf("Stan has a total of $%.2f.\n", sum_b(&stan));
	
	printf("Stan has a total of $%.2f.\n", sum_c(stan));
	
	return 0;
}

double sum_a(double x, double y)
{
	return ( x + y);
}

double sum_b(const struct funds * money)
{
	return ( money->bankfund + money->savefund);
}

double sum_c(struct funds moolah)
{
	return ( moolah.bankfund + moolah.savefund);
}

 
