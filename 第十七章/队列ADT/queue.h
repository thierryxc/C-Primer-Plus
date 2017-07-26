//Queue的接口
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
	Node * front;   //指向队列首项的指针 
	Node * rear;   //指向队列尾项的指针 
	int items;    //队列中的项数 
} Queue;

//初始化队列
void InitializeQueue(Queue * pq);

//检查队列是否已满
bool QueueIsFull(const Queue * pq);

//检查队列是否为空
bool QueueIsEmpty(const Queue * pq);

//确定队列中的项数
int QueueItemCount(const Queue * pq);

//在队列末尾添加项
bool EnQueue(Item item, Queue * pq);

//在队列开头删除项
bool DeQueue(Item *pitem, Queue * pq);

//清空队列
void EmptyTheQueue(Queue * pq);

#endif 
