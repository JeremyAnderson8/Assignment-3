#include <iostream>
using namespace std;

template <typename T>
class GenericStack
{
  public:
    GenericStack(); // default constructor
    GenericStack(int maxSize); //overloaded constructor
    ~GenericStack(); //desctructor
    //functions
    void push(T data); //insert
    T pop(); //remove

    //helper functions
    bool isFull();
    bool isEmpty();
    char peek();

    int mSize; //max size of myStack
    int top; //variable to keep track of indices representing the top of our stack
    T *myArray;
};
