#include <iostream>
#include <vector>
#include <string>
#include "BST.h"
using namespace std;

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

  cout << "Inorder (sorted): ";
  tree.inorder();

  cout << "\nPostorder: ";
  tree.postorder();

  cout << "\nPreorder: ";
  tree.preorder();

  cout << "\nThe number of nodes is " << tree.getSize() << endl;
  cout << "search(\"Jones\") " << tree.search("Jones") << endl;
  cout << "search(\"John\") " << tree.search("John") << endl;

  cout << "A path from the root to Peter is: ";
  vector<TreeNode<string>* > *v = tree.path("Peter");
  for (unsigned i = 0; i < (*v).size(); i++)
    cout << (*v)[i]->element << " ";

  int numbers[] = {2, 4, 3, 1, 8, 5, 6, 7};
  BST<int> intTree(numbers, 8);
  cout << "\nInorder (sorted): ";
  intTree.inorder();

  return 0;
}
