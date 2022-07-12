#include <iostream>
#include <ctime> // for time function
using namespace std;

void getTime(int n) 
{
  int startTime = time(0);
  double k = 0;
  for (int i = 1; i <= n; i++) 
  {
    k = k + 5;
  }
  int endTime = time(0);
  cout << "Execution time for n = " << n 
    << " is " << (endTime - startTime) << " seconds" << endl;
}

int main() 
{
  getTime(250000000);
  getTime(500000000);
  getTime(1000000000);
  getTime(2000000000);

  return 0;
}
