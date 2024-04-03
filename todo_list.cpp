#include <iostream>
#include "todo_list.hpp"
#include <vector>
#include <tuple>

using namespace std;
TodoList::TodoList(){
	// this->items;
	// this->isComplete;
}

void TodoList::add(string item) {
	this->items.push_back(item);
	this->isComplete.push_back(false);
}

void TodoList::all(){
	cout << this->items[0] << endl;
}