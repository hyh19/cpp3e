#include <iostream>
#include <string>
#include <vector>
#include "Graph.h"
#include "Edge.h"
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

  Graph<string> graph1(vectorOfVertices, edges, NUMBER_OF_EDGES);
  cout << "The number of vertices in graph1: " << graph1.getSize();
  cout << "\nThe vertex with index 1 is " << graph1.getVertex(1);
  cout << "\nThe index for Miami is " << graph1.getIndex("Miami");

  cout << "\nedges for graph1: " << endl;
  graph1.printEdges();

  cout << "\nAdjacency matrix for graph1: " << endl;
  graph1.printAdjacencyMatrix();

  // vector of Edge objects for graph in Figure 24.3(a)
  vector<Edge> edgeVector;
  edgeVector.push_back(Edge(0, 2));
  edgeVector.push_back(Edge(1, 2));
  edgeVector.push_back(Edge(2, 4));
  edgeVector.push_back(Edge(3, 4));
  // Create a graph with 5 vertices
  Graph<int> graph2(5, edgeVector);

  cout << "The number of vertices in graph2: " << graph2.getSize();
  cout << "\nedges for graph2: " << endl;
  graph2.printEdges();

  cout << "\nAdjacency matrix for graph2: " << endl;
  graph2.printAdjacencyMatrix();

  return 0;
}
