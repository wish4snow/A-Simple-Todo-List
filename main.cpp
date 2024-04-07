#include <iostream>
#include "todo_list.hpp"

using namespace std;
int main() {

  TodoList list;

  list.add("Buy milk");
  list.add("Prepare a lesson for CSC 122");
  list.add("Buy eggs");
  list.add("Sow beet seeds");

  list.complete("Buy eggs");

  cout << "all items" << endl << endl;

  list.all(); // Pretty prints a list of each of the four tasks above
  
  cout << "completed items" << endl << endl;

  list.complete(); // Pretty prints the task "Buy eggs"

  cout << "incompleted items" << endl << endl;

  list.incomplete(); // Pretty prints the tasks "Buy milk",
                     // "Prepare a lesson for CSC 122", and "Sow beet seeds"

  list.clear();
  cout << "cleared" << endl;
  list.all(); // Pretty prints a message saying that the list is empty
	return 0;
}