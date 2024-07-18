#pragma once
#include <iostream>
using namespace std;

class ListElement
{
	int _val;
public:
	ListElement* _next;

	ListElement();
	ListElement(int);
	~ListElement();
	void show();
};