#include <iostream>
#include <stdlib.h> // ���������� ������� rand(), srand()
#include <time.h> // ���������� ������� time()
#include <cassert>

using namespace std;

void Test1(char exclamationMarkTest)
{
    assert(exclamationMarkTest == '!');

}

// ������� ������������� ���������� �������������� ����� � ��������� ��������.
// �������� �����: [min, max]
int GetRandomNumber(int min, int max)
{
    srand(time(NULL));
    int randomNum = min + rand() % (max - min + 1);

    return randomNum;

}

void main()
{
    cout << "Hello, world!\nAndhiagain!\n";

    int counter;
    counter = GetRandomNumber(5, 50);
    char exclamationMark = '!';

    Test1(exclamationMark);

    for (int i = 0; i < counter; i++) {
        cout << exclamationMark;

    }

    cout << "\n";

}