#include <iostream>
using namespace std;

const int NUMBER_OF_QUEENS = 8; // Constant: eight queens
// queens are placed at (i, queens[i])
// -1 indicates that no queen is currently placed in the ith row
// Initially, place a queen at (0, 0) in the 0th row
int queens[NUMBER_OF_QUEENS] = {-1, -1, -1, -1, -1, -1, -1, -1};

// Check whether a queen can be placed at row i and column j 
bool isValid(int row, int column)
{
  for (int i = 1; i <= row; i++)
    if (queens[row - i] == column       // Check column
      || queens[row - i] == column - i  // Check upper left diagonal
      || queens[row - i] == column + i) // Check upper right diagonal
      return false; // There is a conflict
  return true; // No conflict
}

// Display the chessboard with eight queens 
void printResult()
{
  cout << "\n---------------------------------\n";
  for (int row = 0; row < NUMBER_OF_QUEENS; row++)
  {
    for (int column = 0; column < NUMBER_OF_QUEENS; column++)
      printf(column == queens[row] ? "| Q " : "|   ");
    cout << "|\n---------------------------------\n";
  }
}

// Find a position to place a queen in row k
int findPosition(int k) 
{
  int start = queens[k] + 1; // Search for a new placement

  for (int j = start; j < NUMBER_OF_QUEENS; j++)
  {
    if (isValid(k, j))
      return j; // (k, j) is the place to put the queen now
  }

  return -1;
}

// Search for a solution 
bool search() 
{
  // k - 1 indicates the number of queens placed so far
  // We are looking for a position in the kth row to place a queen
  int k = 0;
  while (k >= 0 && k < NUMBER_OF_QUEENS)
  {
    // Find a position to place a queen in the kth row
    int j = findPosition(k);
    if (j < 0) 
    {
      queens[k] = -1;
      k--; // back track to the previous row
    } 
    else 
    {
      queens[k] = j;
      k++;
    }
  }
    
  if (k == -1)
    return false; // No solution
  else
    return true; // A solution is found
}

int main()
{
  search(); // Start search from row 0. Note row indices are 0 to 7
  printResult(); // Display result

  return 0;
}
