#include <iostream>
#include <vector>
#include <string>
#include "BST.h"
using namespace std;

template <typename T>
void printTree(const BST<T>& tree)
{
  // Traverse tree
  cout << "Inorder (sorted): ";
  tree.inorder();
  cout << "\nPostorder: ";
  tree.postorder();
  cout << "\nPreorder: ";
  tree.preorder();
  cout << "\nThe number of nodes is " << tree.getSize() << endl;
}

int main()
{
  BST<string> tree;
  tree.insert("George");
  tree.insert("Michael");
  tree.insert("Tom");
  tree.insert("Adam");
  tree.insert("Jones");
  tree.insert("Peter");
  tree.insert("Daniel");
  printTree(tree);

  cout << "\nAfter delete George:";
  tree.remove("George");
  printTree(tree);

  cout << "\nAfter delete Adam:";
  tree.remove("Adam");
  printTree(tree);

  cout << "\nAfter delete Michael:";
  tree.remove("Michael");
  printTree(tree);

  return 0;
}
