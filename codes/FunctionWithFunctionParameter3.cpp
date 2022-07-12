#include <iostream>
using namespace std;

void print(int number)
{
  cout << 2 * number << " ";
}

void m(int t[], int size, void f(int))
{
  for (int i = 0; i < size; i++)
    f(t[i]);
}

int main()
{
  int list[4] = {1, 2, 3, 4};
  m(list, 4, print);

  return 0;
}
