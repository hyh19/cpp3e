#ifndef STACKWITHLINKEDLIST_H
#define STACKWITHLINKEDLIST_H
#include "LinkedList.h"

template<typename T>
class Stack
{
public:
  Stack();
  bool isEmpty() const;
  T peek() const throw (runtime_error);
  void push(T value);
  T pop();
  int getSize() const;

private:
  LinkedList<T> list;
};

template<typename T>
Stack<T>::Stack()
{
}

template<typename T>
bool Stack<T>::isEmpty() const
{
  return list.isEmpty();
}

template<typename T>
T Stack<T>::peek() const throw (runtime_error)
{
  return list.getLast();
}

template<typename T>
void Stack<T>::push(T value)
{
  list.addLast(value);
}

template<typename T>
T Stack<T>::pop() throw (runtime_error)
{
  return list.removeLast();
}

template<typename T>
int Stack<T>::getSize() const
{
  return list.getSize();
}

#endif
