//֧����������ĺ���
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"list.h"



//�ӿں���
//����������Ϊ��
void InitializeList(List plist)
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
	{
        strcpy(plist.entries[i].title,"\0");
        plist.entries[i].rating = 0;
    }
    plist.items = 0;
 }
 
bool ListIsEmpty(const List plist)
{
	if (plist.items == 0)
	    return true;
	else
	    return false;
 }
 
bool ListIsFull(const List plist)
{
	if (plist.items == MAXSIZE)
	    return true;
	else
	    return false;

	
}
 
unsigned int ListItemCount(const List plist)
{
		return plist.items;
}
 
bool AddItem(Item item, List  plist)
{
	
	if(plist.items == MAXSIZE)
	    return false;
	    
    plist.entries[plist.items] = item;
    plist.items++;
	return true;
 }
 
//����ÿ���ڵ㲢ִ��pfunָ��ĺ���
void Traverse(const List plist, void (*pfun)(Item item))
{
	int index;
	
	for(index = 0;index < plist.items; index++)
	    (*pfun)(plist.entries[index]);
 }
 
void EmptyTheList(List  plist)
{
	int i;
	for (i = 0; i < MAXSIZE; i++)
	{
        strcpy(plist.entries[i].title,"\0");
        plist.entries[i].rating = 0;
    }
    plist.items = 0;
 }
 

