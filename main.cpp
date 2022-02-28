#include <string>
#include <stdio.h>
#include "DLinkedList.h"
#include <iostream>

using namespace std;

int main(void) {
	DLinkedList* list = new DLinkedList();
	// 1
	list->addFront("SFO");
	list->addFront("PVD");
	list->addFront("BWI");
	list->addFront("JFK");
	list->print();

	// 2
	cout << list->front() << "\n";

	//3
	cout << list->back() << "\n";

	// 4
	list->removeFront();
	list->print();

	return EXIT_SUCCESS;
}
