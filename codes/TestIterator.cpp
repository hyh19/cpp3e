#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

string toUpperCase(string s)
{
  for (int i = 0; i < s.length(); i++)
    s[i] = toupper(s[i]);

  return s;
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
