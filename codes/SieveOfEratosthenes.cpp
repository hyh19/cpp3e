#include <iostream>
using namespace std;

int main()
{
  cout << "Find all prime numbers <= n, enter n: ";
  int n;
  cin >> n;

  bool *primes = new bool[n + 1]; // Prime number sieve

  // Initialize primes[i] to true
  for (int i = 0; i < n + 1; i++)
  {
    primes[i] = true;
  }

  for (int k = 2; k <= n / k; k++)
  {
    if (primes[k])
    {
      for (int i = k; i <= n / k; i++)
      {
        primes[k * i] = false; // k * i is not prime
      }
    }
  }

  const int NUMBER_PER_LINE = 10; // Display 10 per line
  int count = 0; // Count the number of prime numbers found so far
  // Print prime numbers
  for (int i = 2; i < n + 1; i++)
  {
    if (primes[i])
    {
      count++;
      if (count % 10 == 0)
        cout << i << endl;
      else
        cout << i << " ";
    }
  }

  cout << "\n" << count << " number of primes <= " << n << endl;

  delete [] primes;

  return 0;
}
