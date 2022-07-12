#include <iostream>
#include <queue>
#include <deque>
using namespace std;

template<typename T>
void printQueue(T& pQueue)
{
  while (!pQueue.empty())
  {
    cout << pQueue.top() << " ";
    pQueue.pop();
  }
}

int main()
{
  priority_queue<int> queue1;
  priority_queue<int, deque<int>, greater<int>> queue2;

  queue1.push(7); queue2.push(7);
  queue1.push(4); queue2.push(4);
  queue1.push(9); queue2.push(9);
  queue1.push(2); queue2.push(2);
  queue1.push(1); queue2.push(1);

  cout << "Contents in queue1: ";
  printQueue(queue1);

  cout << "\nContents in queue2: ";
  printQueue(queue2);

  return 0;
}
