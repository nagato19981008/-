#include <stdio.h>
#include <malloc.h>
#define MaxSize 10

typedef struct LNode 
{
	int data;
	struct LNode *next;
}LNode,*LinkList;

bool InitList(LinkList &L)  //��ͷ���ĵ�����ĳ�ʼ��
{
	L = (LinkList)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

LinkList List_HeadInsert(LinkList& L) //ͷ�巨����������
{
	LNode* s;
	int x;
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;;
	scanf_s("%d", &x);
	while (x != 9999)  //����9999ʱ�˳�
	{
		s = (LinkList)malloc(sizeof(LNode));
		s->next = L->next;
		s->data = x;
		L->next = s;
		scanf_s("%d", x);
	}
	return L;
}

LinkList List_TailInsert(LinkList& L) //β�巨����������
{
	LNode* s,*r=L;
	int x;
	L = (LNode*)malloc(sizeof(LNode));
	while (x != 9999) //����9999�˳�
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

LNode* GetElem(LNode* L, int i)  //���ص�i���ڵ��ֵ
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

LNode* LocateElem(LinkList* L, int e)
{
	
}

void main()
{
	LNode * L;
	InitList(L);
}