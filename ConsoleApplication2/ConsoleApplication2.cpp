/*
������� ������� ����� ������. ����������� �� ����
������ ���� � ������� � ������������ ��������� �������
� ��������.
*/
#include <iostream>
using namespace std;
#include "BaseList.h"
#include "ListElement.h"
#include "myStack.h"


int main() {
	cout << "--------------------LIST-----------------" << endl;

	//������� ������
	ListElement el1(10);
	ListElement el2(15);
	ListElement el3(20);
	BaseList bList(&el1);
	bList.show();
	bList.add(&el2);
	bList.add(&el3);
	bList.showAll();
	//����
	cout << "--------------------STACK-----------------" << endl;
	myStack Stack;
	Stack.addItem(&el1);
	Stack.show();
	Stack.addItem(&el2);
	Stack.show();
	Stack.addItem(&el3);
	Stack.show();
	Stack.deleteLast();
	Stack.show();
	//�������


	return 0;
}