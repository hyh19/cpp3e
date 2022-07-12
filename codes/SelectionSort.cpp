#include <iostream>
using namespace std;

void selectionSort(double [], int);
void printArray(double list[], int arraySize); // function prototype

int main()
{
  double list[] = {9, 1, 2, 5, 4, 8, 6};
  selectionSort(list, 7);

  printArray(list, 7);
  return 0;
}

void selectionSort(double list[], int listSize)
{
  for (int i = 0; i < listSize; i++)
  {
    // Find the minimum in the list[i..listSize-1]
    double currentMin = list[i];
    int currentMinIndex = i;

    for (int j = i + 1; j < listSize; j++)
    {
      if (currentMin > list[j])
      {
        currentMin = list[j];
        currentMinIndex = j;
      }
    }

    // Swap list[i] with list[currentMinIndex] if necessary;
    if (currentMinIndex != i)
    {
      list[currentMinIndex] = list[i];
      list[i] = currentMin;
    }
  }
}

void printArray(double list[], int arraySize)
{
  for (int i = 0; i < arraySize - 1; i++)
  {
    cout << list[i] <<  " ";
  }
}
