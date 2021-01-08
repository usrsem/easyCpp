#include <iostream>

using namespace std;

class MyString
{
    char* str;
    size_t length;
public:
    MyString(const int& maxLength): length(maxLength), str(new char[maxLength])  {}
       char& operator [] (const size_t& index) const
       {
           if (index >= length)
               std::cerr << "\nOut of range\n";
           return this->str[index];
       }
    ~MyString()
    {
        delete []str;
    }
};
