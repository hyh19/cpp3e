#include <iostream>
#include <vector>
#include "NineTailModel.h"
using namespace std;

int main()
{
  // Prompt the user to enter nine coins H and T's
  cout << "Enter an initial nine coin H and T's: " << endl;
  vector<char> initialNode(9);
  for (int i = 0; i < 9; i++)
    cin >> initialNode[i];

  cout << "The steps to flip the coins are " << endl;
  NineTailModel model;
  vector<int> path =
    model.getShortestPath(model.getIndex(initialNode));

  for (int i = 0; i < path.size(); i++)
    model.printNode(model.getNode(path[i]));

  return 0;
}
