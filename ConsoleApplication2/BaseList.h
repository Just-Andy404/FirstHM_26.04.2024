#pragma once
#include <iostream>
using namespace std;
#include "ListElement.h"

class BaseList
{
	ListElement* _head;
public:
	BaseList();
	BaseList(ListElement*);
	void add(ListElement*);
	void show();
	void showAll();
	void deleteLast();
	ListElement getLast();

};