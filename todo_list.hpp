#include <vector>
#include <tuple>
#include <string>

using namespace std;

class TodoList{
	private:
		vector<string> items;
		vector<bool> isComplete;
	public:
		TodoList();

		void add(string item);
		void complete(string item);
		void all();
		void complete();
		void incomplete();
		void clear();
};