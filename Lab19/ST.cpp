#include "ST.h"
string ST::Top()
{
	return top->data;
}
ST::ST()
{
	top = nullptr;
}
ST::~ST()
{
	while (top)
	{
		node* pv = top;
		top = top->prev;
		delete pv;
	}
}
void ST::push(string data)
{
	node* pv = new node;
	pv->data = data;
	pv->prev = top;
	top = pv;
}
void ST::pop()
{
	if (!(top == nullptr))
	{
		string tmp = top->data;
		node* pv = top;
		top = top->prev;
		delete pv;
	}
}
int ST::size()
{
	int size = 0;
	while (top)
	{
		node* pv = top;
		top = top->prev;
		size++;
	}
	return size;
}
void ST::Print()
{
	node* pv = top;
	while (top)
	{
		cout << top->data << ' ';
		top = top->prev;
	}
	top = pv;
	cout << endl;
}