#include <iostream>
#include <string>
using namespace std;

void sort(string& s, int high)
{
  if (high > 0)
  {
    // Find the largest element and its index
    int indexOfMax = 0;
    char max = s[0];
    for (int i = 1; i <= high; i++)
    {
      if (s[i] > max)
      {
        max = s[i];
        indexOfMax = i;
      }
    }

    // Swap the largest with the last element in the list
    s[indexOfMax] = s[high];
    s[high] = max;

    // Sort the remaining list
    sort(s, high - 1);
  }
}

void sort(string& s)
{
  sort(s, s.size() - 1);
}

int main()
{
  cout << "Enter a string: ";
  string s;
  getline(cin, s);

  sort(s);

  cout << "The sorted string is " << s << endl;

  return 0;
}
