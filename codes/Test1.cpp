#include <iostream>
using namespace std;

// Print grade for the score 
void printGrade(double score)
{
    if (score < 0 || score > 100) 
  {
    cout << "Invalid score";
    exit(1);
  }

  if (score >= 90.0)
    cout << 'A' << endl;
  else if (score >= 80.0)
    cout << 'B' << endl;
  else if (score >= 70.0)
    cout << 'C' << endl;
  else if (score >= 60.0)
    cout << 'D' << endl;
  else
    cout << 'F' << endl;
}

int main()
{
  typedef int integer;

  int list1[5];
  int list2[6];

  return 0;
}
