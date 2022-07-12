#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int NUMBER_OF_LETTERS = 26;
const int NUMBER_OF_RANDOM_LETTERS = 100;
void createArray(char []);
void displayArray(const char []);
void countLetters(const char [], int []);
void displayCounts(const int []);

int main()
{
  // Declare and create an array
  char chars[NUMBER_OF_RANDOM_LETTERS];

  // Initialize the array with random lowercase letters
  createArray(chars);

  // Display the array
  cout << "The lowercase letters are: " << endl;
  displayArray(chars);

  // Count the occurrences of each letter
  int counts[NUMBER_OF_LETTERS];

  // Count the occurrences of each letter
  countLetters(chars, counts);

  // Display counts
  cout << "\nThe occurrences of each letter are: " << endl;
  displayCounts(counts);

  return 0;
}

// Create an array of characters
void createArray(char chars[])
{
  // Create lowercase letters randomly and assign
  // them to the array
  srand(time(0));
  for (int i = 0; i < NUMBER_OF_RANDOM_LETTERS; i++)
    chars[i] = static_cast<char>('a' + rand() % ('z' - 'a' + 1));
}

// Display the array of characters
void displayArray(const char chars[])
{
  // Display the characters in the array 20 on each line
  for (int i = 0; i < NUMBER_OF_RANDOM_LETTERS; i++)
  {
    if ((i + 1) % 20 == 0)
      cout << chars[i] << " " << endl;
    else
      cout << chars[i] << " ";
  }
}

// Count the occurrences of each letter
void countLetters(const char chars[], int counts[])
{
  // Initialize the array
  for (int i = 0; i < NUMBER_OF_LETTERS; i++)
    counts[i] = 0;

  // For each lowercase letter in the array, count it
  for (int i = 0; i < NUMBER_OF_RANDOM_LETTERS; i++)
    counts[chars[i] - 'a'] ++;
}

// Display counts
void displayCounts(const int counts[])
{
  for (int i = 0; i < NUMBER_OF_LETTERS; i++)
  {
    if ((i + 1) % 10 == 0)
      cout << counts[i] << " " << static_cast<char>(i + 'a') << endl;
    else
      cout << counts[i] << " " << static_cast<char>(i + 'a') << " ";
  }
}