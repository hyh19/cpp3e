#include <iostream>
#include <algorithm>
#include <iterator>
#include <ctime>
using namespace std;

int randGenerator(int aRange)
{
  srand(time(0));
  return rand() % aRange;
}

int main()
{
  int array1[] = {1, 2, 3, 4, 5, 6, 7, 8};
  random_shuffle(array1, array1 + 8);
  cout << "After random shuffle, array1: ";
  ostream_iterator<int> output(cout, " ");
  copy(array1, array1 + 8, output);

  int array2[] = {1, 2, 3, 4, 5, 6, 7, 8};
  random_shuffle(array2, array2 + 8, randGenerator);
  cout << "\nAfter random shuffle, array2: ";
  copy(array2, array2 + 8, output);

  return 0;
}
