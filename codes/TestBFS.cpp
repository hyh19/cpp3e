#include <iostream>
#include <string>
#include <vector>
#include "Graph.h"
using namespace std;

int main()
{
  // Vertices for graph in Figure 24.1
  string vertices[] = {"Seattle", "San Francisco", "Los Angeles",
    "Denver", "Kansas City", "Chicago", "Boston", "New York",
    "Atlanta", "Miami", "Dallas", "Houston"};

  // Edge array for graph in Figure 24.1
  int edges[][2] = {
    {0, 1}, {0, 3}, {0, 5},
    {1, 0}, {1, 2}, {1, 3},
    {2, 1}, {2, 3}, {2, 4}, {2, 10},
    {3, 0}, {3, 1}, {3, 2}, {3, 4}, {3, 5},
    {4, 2}, {4, 3}, {4, 5}, {4, 7}, {4, 8}, {4, 10},
    {5, 0}, {5, 3}, {5, 4}, {5, 6}, {5, 7},
    {6, 5}, {6, 7},
    {7, 4}, {7, 5}, {7, 6}, {7, 8},
    {8, 4}, {8, 7}, {8, 9}, {8, 10}, {8, 11},
    {9, 8}, {9, 11},
    {10, 2}, {10, 4}, {10, 8}, {10, 11},
    {11, 8}, {11, 9}, {11, 10}
  };
  const int NUMBER_OF_EDGES = 46; // 46 edges in Figure 24.1

  // Create vector for vertices
  vector<string> vectorOfVertices(12);
  copy(vertices, vertices + 12, vectorOfVertices.begin());

  Graph<string> graph(vectorOfVertices, edges, NUMBER_OF_EDGES);
  Tree dfs = graph.bfs(5); // Vertex 5 is Chicago

  vector<int> searchOrders = dfs.getSearchOrders();
  cout << dfs.getNumberOfVerticesFound() <<
    " vertices are searched in this BFS order:" << endl;
  for (int i = 0; i < searchOrders.size(); i++)
    cout << graph.getVertex(searchOrders[i]) << " ";
  cout << endl << endl;

  for (int i = 0; i < searchOrders.size(); i++)
    if (dfs.getParent(i) != -1)
      cout << "parent of " << graph.getVertex(i) <<
        " is " << graph.getVertex(dfs.getParent(i)) << endl;

  return 0;
}
