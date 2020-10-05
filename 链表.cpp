#include <stdio.h>
#include <malloc.h>
#define MaxSize 10

typedef struct LNode 
{
	int data;
	struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList &L)  //带头结点的单链表的初始化
{
	L = (LinkList)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

LinkList List_HeadInsert(LinkList& L) //头插法建立单链表
{
	LNode* s;
	int x;
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;;
	scanf_s("%d", &x);
	while (x != 9999)  //输入9999时退出
	{
		s = (LinkList)malloc(sizeof(LNode));
		s->next = L->next;
		s->data = x;
		L->next = s;
		scanf_s("%d", x);
	}
	return L;
}

LinkList List_TailInsert(LinkList& L) //尾插法建立单链表
{
	LNode* s,*r=L;
	int x;
	L = (LNode*)malloc(sizeof(LNode));
	while (x != 9999) //输入9999退出
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf_s("%d", x);
	}
	r->next = NULL;
	return L;
	
}

LNode* GetElem(LNode* L, int i)  //返回第i个节点的值
{
	int j = 0;
	LinkList p;
	p = L->next;
	if (i == 0)
		return L;
	if (i < 1)
		return NULL;
	for (j; j < i; j++)
		p = p->next;
	return p;
}

LNode* LocateElem(LinkList L, int e) //返回数据e的节点
{
	LinkList p;
	p = L->next;
	while (p->data != e&&p!=NULL)
		p = p->next;
	return p;
}



void main()
{
	LNode * L;
	InitList(L);
}
