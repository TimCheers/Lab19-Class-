#include <iostream>
#include "ST.h"
#include <string>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    string dat;
    ST str;
    ST str2;
    int size = -1, No = -1;
    cout << "Введите количество элементов стека" << endl;
    while (size <= 0)
    {
        cin >> size;
        if (size <= 0)
        {
            cout << "Введено некоректное значение" << endl;
        }
    }
    string a;
    for (int i = 0; i < size; i++)
    {
        cout << "Введите " << i + 1 << " элемент: ";
        cin >> a;
        str.push(a);
    }
    str.Print();
    cout << "Введите номер добавляемого элемента: ";
    while (No <= 0 || No >= size + 2)
    {
        cin >> No;
        if (No <= 0 || No >= size + 2)
        {
            cout << "Введено некоректное значение" << endl;
        }
    }
    for (int i = 0; i < size - No + 1; i++)
    {
        str2.push(str.Top());
        str.pop();
    }
    cout << "Введите новый элемент: ";
    cin >> dat;
    str.push(dat);
    for (int i = 0; i < size - No + 1; i++)
    {
        str.push(str2.Top());
        str2.pop();
    }
    str.Print();
    return 0;
}