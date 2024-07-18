#include "BaseList.h"

BaseList::BaseList()
{
	_head = nullptr;
}

BaseList::BaseList(ListElement* el)
{
	if (_head == nullptr)
	{
		_head = el;
	}
	else
		add(el);
}

void BaseList::add(ListElement* el)
{
	if (_head == nullptr)
	{
		_head = el;
	}
	else
	{
		ListElement* temp;
		temp = _head;
		while (temp->_next != nullptr)
		{
			temp = temp->_next;
		}
		temp->_next = el;
		temp = nullptr;
	}
}

void BaseList::show()
{
	_head->show();
}

void BaseList::showAll()
{
	ListElement* temp;
	temp = _head;
	do
	{
		temp->show();
		temp = temp->_next;

	} while (temp != nullptr);
}

void BaseList::deleteLast()
{
	ListElement* temp;
	temp = _head->_next;
	delete[]_head;
	_head = temp;

}

ListElement BaseList::getLast()
{
	return ListElement();
}