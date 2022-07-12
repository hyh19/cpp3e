#include <iostream>
using namespace std;

void insertionSort(int list[], int listSize) 
{
  for (int i = 1; i < listSize; i++) 
  {
    // Insert list[i] into a sorted sublist list[0..i-1] so that
    //  list[0..i] is sorted. 
    int currentElement = list[i];
    int k;
    for (k = i - 1; k >= 0 && list[k] > currentElement; k--) 
    {
      list[k + 1] = list[k];
    }

    // Insert the current element into list[k+1]
    list[k + 1] = currentElement;
  }
}

int main()
{
  const int SIZE = 9;
  int list[] = {1, 7, 3, 4, 9, 3, 3, 1, 2};
  insertionSort(list, SIZE);
  for (int i = 0; i < SIZE; i++)
    cout << list[i] << " ";

  return 0;
}  
