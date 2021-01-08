//
//  lab7.cpp
//  LabsForDesya
//
//  Created by usrsem on 1/8/21.
//

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

class Firefly : public CreationOfGod
{
public:
    string parentName;
    
    Firefly(string type, string curName) : CreationOfGod(type) { parentName = curName; }
    void saySomething(string phrase="")
    {
        if (phrase == "")
            toBeSad();
        else
            cout << phrase << "\n";
    }
private:
    int wingsLength;
    void toBeSad() { cout << "I'm sad(" << "\n"; }
protected:
    string name;
    void sayMyName() { cout << name << "\n"; }
};

/*
int main()
{
    Firefly f = Firefly("int", "Lesya");
    f.saySomething("lalala");
    f.saySomething();
    cout << f.parentName << "\n";
    return  0;
}
 */
