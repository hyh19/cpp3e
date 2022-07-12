#include <iostream>
#include "Heap.h"
using namespace std;

template <typename T>
void heapSort(T list[], int arraySize)
{
  Heap<T> heap;

  for (int i = 0; i < arraySize; i++)
    heap.add(list[i]);

  for (int i = 0; i < arraySize; i++)
    list[arraySize - i - 1] = heap.remove();
}

int main()
{
  const int SIZE = 9;
  int list[] = {1, 7, 3, 4, 9, 3, 3, 1, 2};
  heapSort(list, SIZE);
  for (int i = 0; i < SIZE; i++)
    cout << list[i] << " ";

  return 0;
}  
