#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
  cout << "Find all prime numbers <= n, enter n: ";
  int n;
  cin >> n;

  const int NUMBER_PER_LINE = 10; // Display 10 per line
  int count = 0; // Count the number of prime numbers
  int number = 2; // A number to be tested for primeness
  // A vector to hold prime numbers
  vector<int> primeVector;
  int squareRoot = 1; // Check whether number <= squareRoot

  cout << "The prime numbers are:" << endl;

  // Repeatedly find prime numbers
  while (number <= n)
  {
    // Assume the number is prime
    bool isPrime = true; // Is the current number prime?

    if (squareRoot * squareRoot < number) squareRoot++;

    // Test if number is prime
    for (int k = 0; k < primeVector.size()
                    && primeVector.at(k) <= squareRoot; k++) 
    {
      if (number % primeVector.at(k) == 0) // If true, not prime
      {
        isPrime = false; // Set isPrime to false
        break; // Exit the for loop
      }
    }

    // Print the prime number and increase the count
    if (isPrime) 
    {
      count++; // Increase the count
      primeVector.push_back(number); // Add a new prime to the list
      if (count % NUMBER_PER_LINE == 0) 
      {
        // Print the number and advance to the new line
        cout << number << endl;
      }
      else
        cout << number << " ";
    }

    // Check if the next number is prime
    number++;
  }

  cout << "\n" << count << " number of primes <= " << n << endl;
  return 0;
}
