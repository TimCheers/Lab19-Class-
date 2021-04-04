#pragma once
#include <iostream>
#include <string>
using namespace std;
struct node
{
	string data;
	node* prev;
};
class ST
{
private:
		node* top;;
public:
	string Top();
	ST();
	~ST();
	void push(string data);
	void pop();
	void Print();
	int size();
};
