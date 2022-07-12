#include <iostream>
using namespace std;

// The function for sorting the numbers 
void bubbleSort(int list[], int arraySize)
{
  bool needNextPass = true;

  for (int k = 1; k < arraySize && needNextPass; k++)
  {
    // Array may be sorted and next pass not needed
    needNextPass = false;
    for (int i = 0; i < arraySize - k; i++)
    {
      if (list[i] > list[i + 1])
      {
        // Swap list[i] with list[i + 1]
        int temp = list[i];
        list[i] = list[i + 1];
        list[i + 1] = temp;

        needNextPass = true; // Next pass still needed
      }
    }
  }
}

int main()
{
  const int SIZE = 9;
  int list[] = {1, 7, 3, 4, 9, 3, 3, 1, 2};
  bubbleSort(list, SIZE);
  for (int i = 0; i < SIZE; i++)
    cout << list[i] << " ";

  return 0;
}  
