#include "GenericStack.cpp"
#include <iostream>

int main(int argc, char **argv)
{
  GenericStack<char> *myStack = new GenericStack<char>(10);

  myStack->push('h');
  myStack->push('i');
  cout << myStack->pop() << endl;
  cout << myStack->pop() << endl;

  return 0;
}
