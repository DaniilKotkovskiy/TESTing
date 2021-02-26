#pragma once
#include <string>
#include <iostream>

using namespace std;

class PearsonData {

private:

    string surname;
    string name;
    int age;

public:

    PearsonData(string valueSurname, string valueName, int valueAge)
    {
        surname = valueSurname;
        name = valueName;
        age = valueAge;

    }

    PearsonData()
    {
        surname = " ";
        name = " ";
        age = 0;

    };

    void setSurname(string valueSurname)
    {
        surname = valueSurname;

    }

    void setName(string valueName)
    {
        name = valueName;

    }

    void setAge(int valueAge)
    {
        age = valueAge;

    }


    void getSurname()
    {
        cout << " " << surname << " ";

    }

    void getName()
    {
        cout << " " << name << " ";

    }

    int getAge()
    {
        return age;

    }


    void Print()
    {
        cout << surname << " " << name << " " << age << endl;

    }

};