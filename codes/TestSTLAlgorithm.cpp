#include <iostream>
#include <algorithm>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
  // Create a list for strings
  LinkedList<string> list;

  // Add elements to the list
  list.add("America");
  list.add("Canada");
  list.add("Russia");
  list.add("France");

  cout << "The max element in the list is: " <<
    *max_element(list.begin(), list.end()) << endl;

  cout << "The min element in array1: " <<
    *min_element(list.begin(), list.end()) << endl;

  return 0;
}
