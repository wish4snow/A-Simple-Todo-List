#include <iostream>
#include "item.hpp"

using namespace std;

Item::Item(string item) {
	this->item = item;
	this->completeStatus = false;
}

void Item::setComplete() {
	this->completeStatus = true;
}

bool Item::isComplete() {
	return this->completeStatus;
}

string Item::toString() {
	return this->item;
}