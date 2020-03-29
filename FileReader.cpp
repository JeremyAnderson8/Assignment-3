#include <iostream>
#include <fstream>
#include "FileReader.h"

using namespace std;

FileReader::FileReader(){

}

FileReader::FileReader(string fileName){

}

FileReader::~FileReader(){

}

void FileReader::syntaxChecker(){
  inFile.open(name);
  
}

void FileReader::getFile(){
  cout << "Enter The Name Of A File: " << endl;
  cin >> name;
  syntaxChecker();
}
