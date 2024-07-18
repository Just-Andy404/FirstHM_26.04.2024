#pragma once
#include "BaseList.h"
#include "ListElement.h"


class myStack :public BaseList
{
	int _size;
	int _capacity;
	ListElement* _head;
public:
	myStack();
	myStack(int);
	void addItem(ListElement*);
	ListElement getItem();
	void show();
	void deleteLast();
};