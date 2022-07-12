#include <iostream>
using namespace std;

void printArray(int list[], int arraySize); // Function prototype

int main()
{
  int numbers[5] = {1, 4, 3, 6, 8};
  printArray(numbers, 5); // Invoke the function

  return 0;
}

void printArray(int list[], int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    cout << list[i] <<  " ";
  }
}
