#include <string>
#include <iostream>
#include <cassert>
#include <iomanip>

using namespace std;

void TestQantity(int valueQuantity)
{
    assert(valueQuantity > 0);
   
}
void TestPositiveAge(int intAge)
{
    assert(intAge >= 0);
}

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

int main()
{             
    cout << "Hello!\nPlease, write number of person's in list: ";
    int valueQuantity;
    cin >> valueQuantity;

    TestQantity(valueQuantity);

    cout << "\n";

    PearsonData *pearson = new PearsonData[valueQuantity];
    for (int i = 0; i < valueQuantity; i++) 
    {
        string strSurname, strName;
        int intAge;

        cout << "Enter SURNANME of the " << i + 1 << " peason: ";
        cin >> strSurname;
        pearson[i].setSurname(strSurname);
        cout << "Enter NAME of the " << i + 1 << " peason: ";
        cin >> strName;
        pearson[i].setName(strName);
        cout << "Enter AGE of the " << i + 1 << " peason: ";
        cin >> intAge;

        TestPositiveAge(intAge);
        
        pearson[i].setAge(intAge);

    }

    cout << "\nPearson's list:\n\n";

    for (int i = 0; i < valueQuantity; i++) 
    {
        cout << i + 1 << ".";
        pearson[i].Print();
        cout << endl;

    }

    int i = 0;
    float sumAge = 0;
    int maxAge, minAge = pearson[0].getAge();
    for (int i = 0; i < valueQuantity; i++)
    {
        if (i == 0)
        {
            maxAge = pearson[i].getAge();
            minAge = pearson[i].getAge();
        }
        if (pearson[i].getAge() > maxAge)
        {
            maxAge = pearson[i].getAge();
        }
        if (pearson[i].getAge() < minAge)
        {
            minAge = pearson[i].getAge();
        }
        sumAge += pearson[i].getAge();
    }
    cout << "Youngest person is about: ";
    cout << minAge << endl;
    cout << "Oldest person is about: ";
    cout << maxAge << endl;
    cout << "Average age is: ";
    printf("%.2f", sumAge / valueQuantity);

    return 0;

}