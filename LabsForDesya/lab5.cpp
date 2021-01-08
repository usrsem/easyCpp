#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

struct Student
{
    string Fio;
    int Age;
    string Group;
};

template <typename T>
void PrintToConsole(T src)
{
    string type = typeid(src).name();
    cout << "current type: " << type << "\n";
    cout << src << "\n";
}

template <size_t Size>
void PrintToConsole(int (&arr2D)[Size])
{
    string type = typeid(int *).name();
    cout << "current type: " << type << "\n";
    for(int i = 0; i < Size; ++i)
        cout << arr2D[i] << "\t";
    cout << "\n";
}

template <size_t Rows, size_t Columns>
void PrintToConsole(int (&arr3D)[Rows][Columns])
{
    string type = typeid(int **).name();
    cout << "current type: " << type << "\n";
    cout << "ROWS: " << Rows << " COLUMNS: " << Columns << "\n";

    for(int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Columns; ++j)
        {
            cout << arr3D[i][j] << "\t";
        }
        cout << "\n";
    }
    
    cout << "\n";
}
template <size_t Rows, size_t Columns>
void PrintToConsole(Student (&students2DArray)[Rows][Columns])
{
    cout << "ROWS: " << Rows << " COLUMNS: " << Columns << "\n";
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Columns; ++j)
        {
            cout << "Студент: " << "\n";
            cout << "ФИО: " << students2DArray[i][j].Fio << "\n";
            cout << "Возраст: " << students2DArray[i][j].Age << "\n";
            cout << "Группа: " << students2DArray[i][j].Group << "\n";
            cout << "\n";
        }
    }

}
/*
int main()
{
    int arr2D[10];
    int arr3D[10][10];
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            arr3D[i][j] = j+i;
        }
        arr2D[i] = i;
    }
    
    Student students[2][2];
    students[0][0] = { "Иванов Иван Иванович", 17, "ИО-2020" };
    students[0][1] = { "Семенов Андрей Владиславович", 18, "ИО-2020" };
    students[1][0] = { "Иванов Иван Иванович", 19, "ИО-2020" };
    students[1][1] = { "Иванов Иван Иванович", 20, "ИО-2020" };
    
     
    PrintToConsole(5);
    PrintToConsole(5.6);
    PrintToConsole('a');
    PrintToConsole("asdsad");
    PrintToConsole(arr2D);
    PrintToConsole(arr3D);
    PrintToConsole(students);
    
    
    return 0;
}
*/
