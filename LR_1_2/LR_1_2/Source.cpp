#include <string>
#include <iostream>
#include <cassert>

using namespace std;

//void Test21(int v)
//{
//    assert(v > 0);
//}
//void Test22(int a)
//{
//    assert(a >= 0);
//}

class Human {

    private:

        string surname;
        string name;
        int age;

    public:

        Human(string valueSurname, string valueName, int valueAge)
        {
            surname = valueSurname;
            name = valueName;
            age = valueAge;

        }

   /* Human()
    {
        family = "No";
        name = "No";
        age = 0;
    }*/

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

            void getname()
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

int main()
{

    //русский язык
    setlocale(LC_ALL, "ru");
    //Главное меню              
    cout << "Запишите размер списка людей." << endl;
    //Выбор пункта
    int v;
    cout << "Ваш выбор: ";
    cin >> v;
    //Test21(v);
    //Вводимые данные
    Human* Stas = new Human[v];
    for (int i = 0; i < v; i++)
    {
        string f, n;
        int a;
        system("cls");
        cout << "Выберите фамилию " << i + 1 << " человека: ";
        cin >> f;
        Stas[i].setfamily(f);
        cout << "Выберите имя " << i + 1 << " человека: ";
        cin >> n;
        Stas[i].setname(n);
        cout << "Выберите возраст " << i + 1 << " человека: ";
        cin >> a;
        //Test22(a);
        Stas[i].setage(a);
        system("cls");
    }
    cout << "Вывод:" << endl;
    for (int i = 0; i < v; i++)
    {
        cout << i + 1 << ".";
        Stas[i].Print();
        cout << endl;
    }
    int i = 0;
    double summar = 0;
    int max, min = Stas[0].getage();
    for (int i = 0; i < v; i++)
    {
        if (i == 0)
        {
            max = Stas[i].getage();
            min = Stas[i].getage();
        }
        if (Stas[i].getage() > max)
        {
            max = Stas[i].getage();
        }
        if (Stas[i].getage() < min)
        {
            min = Stas[i].getage();
        }
        summar += Stas[i].getage();
    }
    cout << "Самый малый возраст: ";
    cout << min << endl;
    cout << "Самый большой возраст: ";
    cout << max << endl;
    cout << "Cредний возраст: ";
    cout << summar / v << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
