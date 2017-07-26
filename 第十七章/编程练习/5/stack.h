//Stack�Ľӿ�
#ifndef _STACK_H_
#define _STACK_H_
#include<stdbool.h>

typedef char Item;

#define MAXSTACK 10

typedef struct node{
	Item item;
	struct node * next;
} Node;

typedef struct stack{
	Node * front;   //ָ��ջ�����ָ�� 
	Node * rear;   //ָ��ջβ���ָ�� 
	int items;    //ջ�е����� 
} Stack;

//��ʼ��ջ
void InitializeStack(Stack * ps);

//���ջ�Ƿ�����
bool StackIsFull(const Stack * ps);

//���ջ�Ƿ�Ϊ��
bool StackIsEmpty(const Stack * ps);

//ȷ��ջ�е�����
int StackItemCount(const Stack * ps);

//��ջĩβ�����
bool EnStack(Item item, Stack * ps);

//��ջĩβɾ����
bool DeStacke(Item *pitem, Stack * ps);

//���ջ
void EmptyTheStack(Stack * ps);

#endif 
