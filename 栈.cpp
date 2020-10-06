#include<stdio.h>
#define MaxSize 50

typedef struct   //定义栈
{
	int data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack& s)//初始化栈
{
	s.top = -1;
}

bool StackEmpty(SqStack s)//判定栈是否为空
{
	if (s.top == -1)
		return true;
	else
		return false;
}

bool Push(SqStack& s, int i)//进栈
{
	if (s.top > MaxSize - 1)
		return false;
	s.top = s.top + 1;
	i = s.data[s.top];
	return true;
}

bool Pop(SqStack& s, int& i)//出栈
{
	if (s.top == -1)
		return false;
	i = s.data[s.top];
	s.top = s.top - 1;
	return true;
}

bool GetTop(SqStack s, int& i)
{
	if (s.top == -1)
		return false;
	i = s.data[s.top];
	return true;
}