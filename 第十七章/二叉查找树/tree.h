#ifndef _TREE_H_
#define _TREE_H_
#include<stdbool.h>

#define SLEN 20
typedef struct item
{
	char petname[SLEN];
	char petkind[SLEN];
} Item;

#define MAXITEMS 10

typedef struct trnode
{
	Item item;
	struct trnode * left;  //ָ�����֧��ָ�� 
	struct trnode * right; //ָ���ҷ�֧��ָ�� 
} Trnode;

typedef struct tree
{
	Trnode * root;  //ָ�������ָ�� 
	int size;  //�������� 
} Tree;

//����ԭ��

//��ʼ����

void InitializeTree(Tree * ptree);

//ȷ�����Ƿ�Ϊ��

bool TreeIsEmpty(const Tree * ptree);

//ȷ�����Ƿ�Ϊ��

bool TreeIsFull(const Tree * ptree);

//ȷ����������

int TreeItemCount(const Tree * ptree);

//���������һ����

bool AddItem(const Item * pi, Tree * ptree);

//�����в���һ����

bool InTree(const Item * pi, Tree * ptree);

//������ɾ��һ����

bool DeleteItem(const Item * pi, Tree * ptree);

//�Ѻ���Ӧ��������ÿһ��

void Traverse(const Tree * ptree, void (*pfun) (Item item));

//ɾ��������������

void DeteleAll(Tree * ptree);

#endif
 
