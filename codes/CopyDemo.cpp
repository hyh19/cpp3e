#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main()
{
  int values[] = {1, 2, 3, 4, 5, 6};
  vector<int> intVector(5);
  list<int> intList(5);

  copy(values + 2, values + 4, intVector.begin());
  copy(values, values + 5, intList.begin());

  cout << "After initial copy intVector: ";
  for (int& e: intVector)
    cout << e << " ";

  cout << "\nAfter initial copy intList: ";
  for (int& e: intList)
    cout << e << " ";

  intVector.insert(intVector.begin(), 747);
  ostream_iterator<int> output(cout, " ");
  cout << "\nAfter the insertion function, intVector: ";
  copy(intVector.begin(), intVector.end(), output);

  cout << "\nAfter the copy function, intList: ";
  copy(intVector.begin(), intVector.begin() + 4, intList.begin());
  copy(intVector.begin(), intVector.end(), output);

  return 0;
}
