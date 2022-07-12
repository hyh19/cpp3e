#include <iostream>
using namespace std;

int main()
{
  int counts[100];
  int number; // number read from a file

  // Initialize counts
  for (int i = 0; i < 100; i++)
    counts[i] = 0;

  // Read all numbers
  cin >> number;
  while (number != 0)
  {
    counts[number - 1]++;
    cin >> number;
  }

  // Display result
  for (int i = 1; i < 100; i++)
  {
    if (counts[i] > 0)
      cout << (i + 1) << " occurs " << counts[i]
           << ((counts[i] == 1) ? " time" : " times") << endl;
  }

  return 0;
}
