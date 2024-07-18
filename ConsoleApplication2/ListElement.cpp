#include "ListElement.h"

ListElement::ListElement() :ListElement(0) {}

ListElement::ListElement(int val)
{
	_val = val;
	_next = nullptr;
}

ListElement::~ListElement()
{
	_next = nullptr;
}

void ListElement::show()
{
	cout << "EL: " << _val << endl;
}