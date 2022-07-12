#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	cout << "Enter the number of elements to sort: ";
	int n;
	cin >> n;

  vector<int> v(n);
	for (int i = 0; i < n; i++)
		v[i] = i;

	random_shuffle(v.begin(), v.end());

	int startTime = time(0);
  sort(v.begin(), v.end());
  cout << "Sort time in C++ is " << (time(0) - startTime) << " seconds" << endl;

  return 0;
}