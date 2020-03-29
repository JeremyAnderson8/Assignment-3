#include <iostream>
#include <fstream>
using namespace std;

class FileReader{
  public:
    FileReader();
    FileReader(string fileName);
    ~FileReader();

    void syntaxChecker();
    void getFile();


    string name;
    ifstream inFile;

};
