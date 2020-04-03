#include "GenericStack.cpp"
#include "FileReader.h"
#include <iostream>

int main(int argc, char **argv)
{
  FileReader *myFileReader = new FileReader();
  myFileReader->getFile();

  return 0;
}
