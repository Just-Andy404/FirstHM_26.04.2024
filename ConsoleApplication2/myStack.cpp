#include "myStack.h"

myStack::myStack()
{
	_capacity = 10;
	_size = 0;
	_head = nullptr;
}

myStack::myStack(int capacity)
{
	_capacity = capacity;
	_size = 0;
	_head = nullptr;
}

void myStack::addItem(ListElement* el)
{
	if (_size < _capacity)
	{
		_size++;
		el->_next = _head;
		_head = el;
	}

}

ListElement myStack::getItem()
{
	_size--;
	ListElement* temp = _head;
	_head = _head->_next;
	return *temp;
}

void myStack::show()
{
	_head->show();
}

void myStack::deleteLast()
{
	_head = _head->_next;
}