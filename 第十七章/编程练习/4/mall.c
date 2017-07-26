#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"queue.h"
#define MIN_PER_HR 120.0

int newcustomer(double x);  //�Ƿ����¹˿͵�����
Item customertime(long when);//���ù˿Ͳ���

int main(void)
{
	Queue line1, line2;
	int choice;
	Item temp1, temp2;
	int hours;
	int perhour;  //ÿСʱƽ���˿���
	long cycle, cyclelimit; //ѭ����������ѭ������������
	long turnaways = 0; //���������ܾ��˿�����
	long customers = 0; //������еĹ˿�����
	long served = 0;  //�ڼ���ѯ���Ĺ˿�����
	long sum_line = 0; //�ۼƶ����ܳ�
	int wait_time1 = 0;
	int wait_time2 = 0; //�ȴ�ʱ��
	double min_per_cust; //�˿͵�����ƽ��ʱ��
	long line_wait = 0; //�����ۼƵĵȴ�ʱ��
	
	InitializeQueue(&line1);
	InitializeQueue(&line2);
	srand((unsigned int)time(0));
	puts("Case Study: Sigmud Lander's Advice Booth");
	puts("Enter the number of simulation hours:");
	scanf("%d", &hours);
	cyclelimit = MIN_PER_HR * hours;
	puts("Enter the average number of customers per hour:");
	scanf("%d", &perhour);
	min_per_cust = 	MIN_PER_HR / perhour;
	
	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if ((choice=newcustomer(min_per_cust)) != 0)
		{
			if ( choice == 1 && QueueIsFull(&line1))
			    turnaways++;
			else if (choice == 2 && QueueIsFull(&line2))
			    turnaways++;
			else if (choice == 1)
			{
				customers++;
				temp1 = customertime(cycle);
				EnQueue(temp1, &line1);
			}
			else
			{
                customers++;
				temp2 = customertime(cycle);
				EnQueue(temp2, &line2);				
			}
		}
		if (wait_time1 <= 0 && !QueueIsEmpty(&line1))
		{
			DeQueue(&temp1, &line1);
			wait_time1 = temp1.processtime;
			line_wait += cycle - temp1.arrive;
			served++;
		}
		if (wait_time1 > 0)
		    wait_time1--;
		if (wait_time2 <= 0 && !QueueIsEmpty(&line2))
		{
			DeQueue(&temp2, &line2);
			wait_time2 = temp2.processtime;
			line_wait += cycle - temp2.arrive;
			served++;
		}
		if (wait_time2 > 0)
		    wait_time2--;
		sum_line += QueueItemCount(&line1) + QueueItemCount(&line2);
	}
	
	if (customers > 0)
	{
		printf("customers accepted: %ld\n", customers);
		printf("customers served: %ld\n", served);
		printf("turnaways: %ld\n", turnaways);
		printf("average queue size: %.2f\n", (double) sum_line / (cyclelimit*2));
		printf("average wait time: %.2f minutes\n", (double) line_wait / served); 
	}
	else
	    puts("No customers!");
	    
	EmptyTheQueue(&line1);
	EmptyTheQueue(&line2);
	puts("88");
	
	return 0;
}

int newcustomer(double x)  //x�ǹ˿͵�����ƽ��ʱ�� 
{
	if (rand() * x / RAND_MAX < 0.5)
	    return 1;
	else if (rand() * x / RAND_MAX < 1)
	    return 2;
	else
	    return 0;
 } 
 
Item customertime(long when)
{
	Item cust;
	
	cust.processtime = rand() % 3 + 1;
	cust.arrive = when;
	
	return cust;
 } 
