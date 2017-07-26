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
	struct trnode * left;  //指向左分支的指针 
	struct trnode * right; //指向右分支的指针 
} Trnode;

typedef struct tree
{
	Trnode * root;  //指向根结点的指针 
	int size;  //树的项数 
} Tree;

//函数原型

//初始化树

void InitializeTree(Tree * ptree);

//确定树是否为空

bool TreeIsEmpty(const Tree * ptree);

//确定树是否为满

bool TreeIsFull(const Tree * ptree);

//确定树的项数

int TreeItemCount(const Tree * ptree);

//在树中添加一个项

bool AddItem(const Item * pi, Tree * ptree);

//在树中查找一个项

bool InTree(const Item * pi, Tree * ptree);

//在树中删除一个项

bool DeleteItem(const Item * pi, Tree * ptree);

//把函数应用于树中每一项

void Traverse(const Tree * ptree, void (*pfun) (Item item));

//删除树中所有内容

void DeteleAll(Tree * ptree);

#endif
 
