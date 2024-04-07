#include <iostream>

using namespace std;

class Item {
	private:
		string item;
		bool completeStatus;

	public:
		Item(string item);
		void setComplete();
		bool isComplete();
		string toString();

};