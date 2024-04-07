#include <vector>
#include <string>
#include "item.hpp"

using namespace std;

class TodoList{
	private:
		vector<Item> items;
	public:
		TodoList();

		void add(string item);
		void complete(string item);
		void all();
		void complete();
		void incomplete();
		void clear();
};