#include <iostream>
#include <fstream>
#include "FileReader.h"
#include "GenericStack.cpp"

using namespace std;


FileReader::FileReader(){

}

FileReader::FileReader(string fileName){

}

FileReader::~FileReader(){

}

void FileReader::syntaxChecker(){

  GenericStack<char> *myStack = new GenericStack<char>(200);

  inFile.open(name);
  counter = 0;

  if(inFile.fail())
  {
    cerr << "Error Opening File" << endl;
    exit(1);
  }

  while(getline(inFile, line)){
    counter++;
    for(int i = 0; i < line.length(); i++){
      if(line[i] == '(' || line[i] == '{' || line[i] == '[' || line[i] == ')' || line[i] == '}' || line[i] == ']'){
        //check for open delimters
        if(line[i] == '(' || line[i] == '{' || line[i] == '['){
          myStack->push(line[i]);
        }
        else if(line[i] == ')' || line[i] == '}' || line[i] == ']'){
          if(myStack->peek() == '(' && line[i] != ')'){
            cout << "Missing ')' On Line " << counter << endl;
          }
          else if(myStack->peek() == '{' && line[i] != '}'){
            cout << "Missing '}' On Line " << counter << endl;
          }
          else if(myStack->peek() == '[' && line[i] != ']'){
            cout << "Missing ']' On Line " << counter << endl;
          }
          else{
            cout << "No Delimiters Missing" << endl;
          }
          myStack->pop();
        }
      }
    }
  }
  inFile.close();
}

void FileReader::getFile(){
  cout << "Enter The Name Of A File: " << endl;
  cin >> name;
  syntaxChecker();
}
