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

    //������� ����
    setlocale(LC_ALL, "ru");
    //������� ����              
    cout << "�������� ������ ������ �����." << endl;
    //����� ������
    int v;
    cout << "��� �����: ";
    cin >> v;
    //Test21(v);
    //�������� ������
    Human* Stas = new Human[v];
    for (int i = 0; i < v; i++)
    {
        string f, n;
        int a;
        system("cls");
        cout << "�������� ������� " << i + 1 << " ��������: ";
        cin >> f;
        Stas[i].setfamily(f);
        cout << "�������� ��� " << i + 1 << " ��������: ";
        cin >> n;
        Stas[i].setname(n);
        cout << "�������� ������� " << i + 1 << " ��������: ";
        cin >> a;
        //Test22(a);
        Stas[i].setage(a);
        system("cls");
    }
    cout << "�����:" << endl;
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
    cout << "����� ����� �������: ";
    cout << min << endl;
    cout << "����� ������� �������: ";
    cout << max << endl;
    cout << "C������ �������: ";
    cout << summar / v << endl;

    return 0;
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.
