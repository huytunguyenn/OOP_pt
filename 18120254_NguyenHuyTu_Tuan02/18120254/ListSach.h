#ifndef _LISTSACH_H
#define _LISTSACH_H
#include "Sach.h"
#include <iostream>
#include <string>
using namespace std;
class Node {
	Sach data;
	struct Node* pNext;
	friend class ListSach;
};
class ListSach 
{
private:
	Node* pHead;
	Node* pTail;
	int n;
public:
	ListSach();
	int isEmpty(){
		return pHead == NULL;
	}
	~ListSach();
	Node* getNode(Sach);
	void AddHead(Node*);
	void AddTail(Node*);
	void Input(int);
	void Output();
	int SearchViTriMA(string);
	int SearchViTriTEN(string);
	void OutputTEN(string);
	void DelHead();
	void DelTail();
	void DelByViTri(int);
	int baonhieuTEN(string);
	void DelByMA(string);
	void DelByTEN(string);
	void changePriceByMA(string,int);
	void changePriceByTEN(string,int);
};

#endif




