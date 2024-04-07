#include <iostream>
#include "todo_list.hpp"
#include <vector>

using namespace std;

TodoList::TodoList(){
}


void TodoList::add(string item) {

	this->items.push_back(Item(item));
}


void TodoList::complete(string item) {
	vector<Item>::iterator itemsPtr;

	for (itemsPtr = items.begin();itemsPtr < items.end(); itemsPtr++) {
		if (itemsPtr->toString() == item) {
			itemsPtr->setComplete();
		}

	}
	
}


void TodoList::all(){ 
	vector<Item>::iterator ptr;

	for (ptr = items.begin();ptr < items.end(); ptr++) {
		cout << ptr->toString() << endl;
	}
}


void TodoList::complete() {
	vector<Item>::iterator itemsPtr;

	for (itemsPtr = items.begin(); itemsPtr < items.end(); itemsPtr++) {
		if (itemsPtr->isComplete()) {
			cout << itemsPtr->toString() << endl;
		}
	}
}


void TodoList::incomplete() {
	vector<Item>::iterator itemsPtr;

	for (itemsPtr = items.begin(); itemsPtr < items.end(); itemsPtr++) {
		if (!itemsPtr->isComplete()) {
			cout << itemsPtr->toString() << endl;
		}
	}
}


void TodoList::clear() {
	items.clear();
}

