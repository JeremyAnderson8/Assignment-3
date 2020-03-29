#include "GenericStack.cpp"
#include "FileReader.h"
#include <iostream>

int main(int argc, char **argv)
{
  GenericStack<char> *myStack = new GenericStack<char>(10);
  FileReader *myFileReader = new FileReader();

  myFileReader->getFile();

  return 0;
}
