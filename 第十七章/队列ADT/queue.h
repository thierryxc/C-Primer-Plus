//Queue�Ľӿ�
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include<stdbool.h>

typedef int Item;

#define MAXQUEUE 10

typedef struct node{
	Item item;
	struct node * next;
} Node;

typedef struct queue{
	Node * front;   //ָ����������ָ�� 
	Node * rear;   //ָ�����β���ָ�� 
	int items;    //�����е����� 
} Queue;

//��ʼ������
void InitializeQueue(Queue * pq);

//�������Ƿ�����
bool QueueIsFull(const Queue * pq);

//�������Ƿ�Ϊ��
bool QueueIsEmpty(const Queue * pq);

//ȷ�������е�����
int QueueItemCount(const Queue * pq);

//�ڶ���ĩβ�����
bool EnQueue(Item item, Queue * pq);

//�ڶ��п�ͷɾ����
bool DeQueue(Item *pitem, Queue * pq);

//��ն���
void EmptyTheQueue(Queue * pq);

#endif 
