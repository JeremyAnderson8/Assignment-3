#include "GenericStack.h"

//default constructor
template <typename T>
GenericStack<T>::GenericStack()
{
  myArray = new char[128];
  mSize = 128;
  top = -1;
}

//overloaded constructor
template <typename T>
GenericStack<T>::GenericStack(int maxSize)
{
  myArray = new T[maxSize];
  mSize = maxSize;
  top = -1;
}

template <typename T>
GenericStack<T> :: ~GenericStack()
{
  delete myArray;
}

template <typename T>
void GenericStack<T>::push(T data)
{
    myArray[++top] = data;
}

template <typename T>
T GenericStack<T>::pop()
{
    return myArray[top--];
}

template <typename T>
char GenericStack<T>::peek()
{
    return myArray[top];
}

template <typename T>
bool GenericStack<T>::isFull()
{
  return (top == mSize-1);
}

template <typename T>
bool GenericStack<T>::isEmpty()
{
  return (top == -1);
}
