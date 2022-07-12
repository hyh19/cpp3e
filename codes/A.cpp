#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <stack>
#include <queue>
using namespace std;

class Edge
{
public:
  int u;
  int v;

  Edge(int u, int v)
  {
    this->u = u;
    this->v = v;
  }
};

int main()
{
  int m[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int l[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

cout << *(m + 4)<< endl;
  cout << *(l + 4)<< endl;

  return 0;
}
