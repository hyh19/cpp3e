#include <iostream>
#include <string>
#include "BST.h"
using namespace std;

string toUpperCase(string& s)
{
  for (int i = 0; i < s.length(); i++)
    s[i] = toupper(s[i]);

  return s;
}

int main()
{
  // Create a binary search tree for strings
  BST<string> tree;

  // Add elements to the tree
  tree.insert("America");
  tree.insert("Canada");
  tree.insert("Russia");
  tree.insert("France");

  // Traverse a binary tree using iterators
  for (Iterator<string> iterator = tree.begin();
    iterator != tree.end(); iterator++)
  {
    cout << toUpperCase(*iterator) << " ";
  }

  return 0;
}
