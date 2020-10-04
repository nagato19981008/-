#include<stdio.h>
#define MaxSize 50
typedef struct SqList1
{
	int Data[MaxSize];
	int len;
}SqList;

void InitList(SqList& L)  //初始化顺序表
{
	L.len = 0;
}
void PrintList(SqList& L, int i)   //打印顺序表中的第i个元素
{
	int num = 0;
	num = L.Data[i-1];
	printf("顺序表的第%d个元素是%d\n", i,num);
}

bool AddList(SqList &L, int i, int j)  //将顺序表中的第i位添加元素j
{
	if (i<0 || i>(L.len + 1))
		return false;
	if (L.len  > MaxSize)
		return false;
	for (int n = L.len; n >= i; n--)
		L.Data[n] = L.Data[n - 1];
	L.Data[i-1] = j;
	L.len++;
	return true;
}


bool DeleteList(SqList &L, int i)  //删除第i个元素
{
	if (i<0 || i>L.len - 1)
		return false;
	for (i; i < L.len; i++)
		L.Data[i] = L.Data[i + 1];
		L.len--;
	return false;
}

void main()
{
	SqList L;
	InitList(L);
	AddList(L, 1, 1);
	AddList(L, 2, 2);
	PrintList(L, 1);
	PrintList(L, 2);
	AddList(L, 3, 3);
	PrintList(L, 3);
	DeleteList(L, 2);
	PrintList(L, 2);
	printf("%d", L.len);
}