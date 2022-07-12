#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << "Find all prime numbers <= n, enter n: ";
  int n;
  cin >> n;

  const int NUMBER_PER_LINE = 10; // Display 10 per line
  int count = 0; // Count the number of prime numbers
  int number = 2; // A number to be tested for primeness

  cout << "The prime numbers are:" << endl;

  // Repeatedly find prime numbers
  while (number <= n)
  {
    // Assume the number is prime
    bool isPrime = true; // Is the current number prime?

    // Test if number is prime
    for (int divisor = 2; divisor <= sqrt(number * 1.0); divisor++)
    {
      if (number % divisor == 0)
      { // If true, number is not prime
        isPrime = false; // Set isPrime to false
        break; // Exit the for loop
      }
    }

    // Print the prime number and increase the count
    if (isPrime)
    {
      count++; // Increase the count

      if (count % NUMBER_PER_LINE == 0)
      {
        // Print the number and advance to the new line
        cout << number << endl;
      }
      else
        cout << number << " ";
    }

    // Check whether the next number is prime
    number++;
  }

  cout << "\n" << count << " number of primes <= " << n << endl;

  return 0;
}
