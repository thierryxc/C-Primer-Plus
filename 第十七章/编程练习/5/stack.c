//Queue类型的实现
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

//局部函数
static void CopyToNode(Item item, Node * pn);
static void CopyToItem(Node * pn, Item * pi);

void InitializeStack(Stack * ps)
{
	ps->front = ps->rear = NULL;
	ps->items = 0;
}

bool StackIsFull(const Stack * ps)
{
	return ps->items == MAXSTACK; 
}

bool StackIsEmpty(const Stack * ps)
{
	return ps->items == 0;	
}

int StackItemCount(const Stack * ps)
{
	return ps->items;
}

bool EnStack(Item item, Stack * ps)
{
	Node * pnew;
	
	if (StackIsFull(ps))
	    return false;
	pnew = (Node *)malloc(sizeof(Node));
	if (pnew == NULL)
	{
		fprintf(stderr, "Unable to allocate memory!\n");
		exit(1);
	}
	CopyToNode(item,pnew);
	pnew->next = NULL;
	if (StackIsEmpty(ps))
	    ps->front = pnew;      //项位于首端 
	else
	    ps->rear->next = pnew; //项位于末端 
	ps->rear = pnew;
	ps->items++; //项数+1 
	
	return true;
}

bool DeStack(Item * pitem, Stack * ps)
{
	Node * pt;
	Node * pseek;
	
	if(StackIsEmpty(ps))
	    return false;
	CopyToItem(ps->rear, pitem);
	pt = ps->rear;
	pseek = ps->front;
	if (ps->front == ps->rear)
	{
		free(pt);
		ps->items--;
	}
	else
	{
	
	while(pseek->next != ps->rear)
	{
		pseek = pseek->next;
	}
	pseek->next = NULL;
	ps->rear = pseek;
	free(pt);
	ps->items--;
    }
	if(ps->items == 0)
	    ps->rear == NULL;
	
	return true;
	
 } 
 
void EmptyTheStack(Stack* ps)
{
	Item dummy;
	while(!StackIsEmpty(ps))
	    DeStack(&dummy, ps);
 }
 
static void CopyToNode(Item item, Node * pn)
{
	pn->item = item;
 }
 
static void CopyToItem(Node * pn, Item * pi)
{
	*pi = pn->item;
 } 

