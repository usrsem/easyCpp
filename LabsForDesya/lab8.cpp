#include <iostream>

using namespace std;

class CreationOfGod
{
public:
    CreationOfGod(string type)
    {
        Type = type;
    }
    string Type = ""; //тип Божьего создания
};

template <typename T>
class Firefly : public CreationOfGod
{
public:
    string parentName;
    
    Firefly(string type, string curName) : CreationOfGod(type) { parentName = curName; }
    void saySomething(T phrase)
    {
        cout << phrase << "\n";
    }
private:
    int wingsLength;
    void toBeSad() { cout << "I'm sad(" << "\n"; }
protected:
    string name;
    void sayMyName() { cout << name << "\n"; }
};

template <>
class Firefly<int> : public CreationOfGod{
public:
    string parentName;
    
    Firefly(string type, string curName) : CreationOfGod(type) { parentName = curName; }
    void saySomething(int phrase)
    {
        cout << "Я знаю цифры!" << "\n";
        cout << phrase << "\n";
    }
};


int main()
{
    Firefly<int> f1 = Firefly<int>("int", "Lesya");
    Firefly<string> f2 = Firefly<string>("char", "Desya");
    f1.saySomething(1234);
    f2.saySomething("lalala");
    cout << f2.parentName << "\n";
    return  0;
}

