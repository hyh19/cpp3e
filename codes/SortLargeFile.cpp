#include <iostream>
#include <fstream>
#include "QuickSort.h"
#include <string>
using namespace std;

// Function prototype
void sort(string sourcefile, string targetfile);
int initializeSegments(int segmentSize,
  string sourcefile, string f1);
void mergeTwoSegments(int segmentSize, fstream &f1, fstream &f2,
  fstream &f3);
void merge(int numberOfSegments, int segmentSize,
  string f1, string f2, string f3, string targetfile) ;
void copyHalfToF2(int numberOfSegments, int segmentSize,
  fstream &f1, fstream &f2);
void mergeOneStep(int numberOfSegments, int segmentSize,
  string f1, string f2, string f3);
void mergeSegments(int numberOfSegments, int segmentSize,
  fstream &f1, fstream &f2, fstream &f3);
void copyFile(string f1, string targetfile);
void displayFile(string filename);

int main()
{
  // Sort largedata.dat into sortedfile.dat
  sort("largedata.dat", "sortedfile.dat");

  // Display the first 100 numbers in sortedfile.dat
  displayFile("sortedfile.dat");
}

/** Sort sourcefile into targetfile */
void sort(string sourcefile, string targetfile)
{
  const int MAX_ARRAY_SIZE = 10000;

  // Implement Phase 1: Create initial segments
  int numberOfSegments =
    initializeSegments(MAX_ARRAY_SIZE, sourcefile, "f1.dat");

  // Implement Phase 2: Merge segments recursively
  merge(numberOfSegments, MAX_ARRAY_SIZE,
    "f1.dat", "f2.dat", "f3.dat", targetfile);
}

/* Sort original file into sorted segments */
int initializeSegments(int segmentSize, string sourceFile, string f1)
{
  int *list = new int[segmentSize];

  fstream input;
  input.open(sourceFile.c_str(), ios::in | ios::binary);
  fstream output;
  output.open(f1.c_str(), ios::out | ios::binary);

  int numberOfSegments = 0;
  while (!input.eof())
  {
    int i = 0;
    for ( ; !input.eof() && i < segmentSize; i++)
    {
      input.read(reinterpret_cast<char *>
        (&list[i]), sizeof(list[i]));
    }

    if (input.eof()) i--;
    if (i <= 0)
      break;
    else
      numberOfSegments++;

    // Sort an array list[0..i-1]
    quickSort(list, i);

    // Write the array to f1.dat
    for (int j = 0; j < i; j++)
    {
      output.write(reinterpret_cast<char *>
        (&list[j]), sizeof(list[j]));
    }
  }

  input.close();
  output.close();
  delete [] list;

  return numberOfSegments;
}

void merge(int numberOfSegments, int segmentSize,
  string f1, string f2, string f3, string targetfile)
{
  if (numberOfSegments > 1)
  {
    mergeOneStep(numberOfSegments, segmentSize, f1, f2, f3);
    merge((numberOfSegments + 1) / 2, segmentSize * 2,
      f3, f1, f2, targetfile);
  }
  else
  { // rename f1 as the final sorted file
    copyFile(f1, targetfile);
    cout << "\nSorted into the file " << targetfile << endl;
  }
}

void copyFile(string f1, string targetfile)
{
  fstream input;
  input.open(f1.c_str(), ios::in | ios::binary);

  fstream output;
  output.open(targetfile.c_str(), ios::out | ios::binary);
  int i = 0;
  while (!input.eof()) // Continue if not end of file
  {
    int value;
    input.read(reinterpret_cast<char *> (& value), sizeof(value));
    if (input.eof()) break;
    output.write(reinterpret_cast<char *> (& value), sizeof(value));
  }

  input.close();
  output.close();
}

void mergeOneStep(int numberOfSegments, int segmentSize, string f1,
  string f2, string f3)
{
  fstream f1Input;
  f1Input.open(f1.c_str(), ios::in | ios::binary);

  fstream f2Output;
  f2Output.open(f2.c_str(), ios::out | ios::binary);

  // Copy half number of segments from f1.dat to f2.dat
  copyHalfToF2(numberOfSegments, segmentSize, f1Input, f2Output);
  f2Output.close();

  // Merge remaining segments in f1 with segments in f2 into f3
  fstream f2Input;
  f2Input.open(f2.c_str(), ios::in | ios::binary);
  fstream f3Output;
  f3Output.open(f3.c_str(), ios::out | ios::binary);

  mergeSegments(numberOfSegments / 2, segmentSize, f1Input, f2Input, f3Output);

  f1Input.close();
  f2Input.close();
  f3Output.close();
}

/** Copy first half number of segments from f1.dat to f2.dat */
void copyHalfToF2(int numberOfSegments, int segmentSize, fstream &f1,
  fstream &f2)
{
  for (int i = 0; i < (numberOfSegments / 2) * segmentSize; i++)
  {
    int value;
    f1.read(reinterpret_cast<char *> (& value), sizeof(value));
    f2.write(reinterpret_cast<char *> (& value), sizeof(value));
  }
}

/** Merge all segments */
void mergeSegments(int numberOfSegments, int segmentSize, fstream &f1,
  fstream &f2, fstream &f3)
{
  for (int i = 0; i < numberOfSegments; i++)
  {
    mergeTwoSegments(segmentSize, f1, f2, f3);
  }

  // f1 may have one extra segment, copy it to f3
  while (!f1.eof())
  {
    int value;
    f1.read(reinterpret_cast<char *> (& value), sizeof(value));
    if (f1.eof()) break;
    f3.write(reinterpret_cast<char *> (& value), sizeof(value));
  }
}

/** Merge two segments */
void mergeTwoSegments(int segmentSize, fstream &f1, fstream &f2,
  fstream &f3)
{
  int intFromF1;
  f1.read(reinterpret_cast<char *> (& intFromF1), sizeof(intFromF1));
  int intFromF2;
  f2.read(reinterpret_cast<char *> (& intFromF2), sizeof(intFromF2));
  int f1Count = 1;
  int f2Count = 1;

  while (true)
  {
    if (intFromF1 < intFromF2)
    {
      f3.write(reinterpret_cast<char *>(&intFromF1), sizeof(intFromF1));
      if (f1.eof() || f1Count++ >= segmentSize)
      {
        if (f1.eof()) break;
        f3.write(reinterpret_cast<char *>(&intFromF2), sizeof(intFromF2));
        break;
      }
      else
      {
        f1.read(reinterpret_cast<char *> (& intFromF1), sizeof(intFromF1));
      }
    }
    else
    {
      f3.write(reinterpret_cast<char *>(&intFromF2), sizeof(intFromF2));
      if (f2.eof() || f2Count++ >= segmentSize)
      {
        if (f2.eof()) break;
        f3.write(reinterpret_cast<char *>(&intFromF1), sizeof(intFromF1));
        break;
      }
      else {
        f2.read(reinterpret_cast<char *> (& intFromF2), sizeof(intFromF2));
      }
    }
  }

  while (!f1.eof() && f1Count++ < segmentSize) {
    int value;
    f1.read(reinterpret_cast<char *> (& value), sizeof(value));
    if (f1.eof()) break;
    f3.write(reinterpret_cast<char *> (& value), sizeof(value));
  }

  while (!f2.eof() && f2Count++ < segmentSize) {
    int value;
    f2.read(reinterpret_cast<char *> (& value), sizeof(value));
    if (f2.eof()) break;
    f3.write(reinterpret_cast<char *> (& value), sizeof(value));
  }
}

/** Display the first 10 numbers in the specified file */
void displayFile(string filename)
{
  fstream input(filename.c_str(), ios::in | ios::binary);
  int value;
  for (int i = 0; i < 100; i++)
  {
    input.read(reinterpret_cast<char *>(& value), sizeof(int));
    cout << value << " ";
  }

  input.close();
}
