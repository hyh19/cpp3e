#include <iostream>
#include <string>
#include "LinkedListWithIterator.h"
using namespace std;

char * toUpperCase(string s)
{
  char *result = new char[s.length() + 1];

  for (int i = 0; i < s.length(); i++)
    result[i] = toupper(s[i]);

  result[s.length()] = '\0'; // End of the string
  return result;
}

int main()
{
  // Create a list for strings
  LinkedList<string> list;

  // Add elements to the list
  list.add("America");
  list.add("Canada");
  list.add("Russia");
  list.add("France");

  // Traverse a list using iterators
  for (Iterator<string> iterator = list.begin();
    iterator != list.end(); iterator++)
  {
    cout << toUpperCase(*iterator) << " ";
  }

  return 0;
}
