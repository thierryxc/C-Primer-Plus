//�����ɫ��ģ�����
#include<stdio.h>
#include<stdlib.h>//Ϊsrand()�ṩԭ��
#include<time.h>//Ϊtime()�ṩԭ��
#include"diceroll.h"//˫����ָʾ�����ڱ��ز����ļ�����������������ͷ�ļ� 

int main(void)
{
	int dice, roll;
	int sides;
	int status;
	
	srand((unsigned int) time(0) );//�������
	printf("Enter the number of sides per die, 0 to stop.\n");
	while(scanf("%d",&sides) == 1 && sides > 0)
	{
		printf("How many dice?\n");
		if( (status = scanf("%d",&dice)) != 1)
		{
			if (status == EOF)
		        break;//�˳�ѭ��
			else
			{
				printf("You should have entered a integer.\nLet's begin again.\n");
				while(getchar() != '\n')
				    continue;//�����������
				printf("How many sides? Enter 0 to stop.\n");
				continue;//������һ�� (�ӵ�һ��while��ʼ)
			 } 
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",roll, dice, sides);
		printf("How many sides? Enter 0 to stop.\n"); 
	}
	printf("The rellem () function was called %d times.\n", roll_count);
	
	printf("88\n");
	
	return 0; 
}
