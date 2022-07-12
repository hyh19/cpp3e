#include <iostream>
using namespace std;

int nextNum()
{
  static int n = 20;
  return n++;
}

void m(int t[], int size, int f())
{
  for (int i = 0; i < size; i++)
    t[i] = f();
}

int main()
{
  int list[4];
  m(list, 4, nextNum);
  for (int i = 0; i < 4; i++)
    cout << list[i] << " ";
  cout << endl;

  return 0;
}
