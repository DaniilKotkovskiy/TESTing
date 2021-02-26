#include <iostream>
#include <cassert>

using namespace std;

int s(int a, int b)
{
    return a * b;
}

void TestSum()
{
    assert(s(2, 3) == 6);
    assert(s(-2, 3) == -6);
    assert(s(-2, 0) == 0);
    assert(s(-2, 2) == -4);
    cout << "Test OK";
}

int main()
{
    TestSum();
    return 0;
}