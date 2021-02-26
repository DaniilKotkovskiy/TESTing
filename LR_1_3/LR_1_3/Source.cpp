#include <iostream>
#include <cassert>

using namespace std;

void TestSquare(double a, double b)
{
    assert(a >= 0);
    assert(b >= 0);

    cout << "\nTesting IS OK!\n";

}


void main()
{
    double a, b, s;
    cout << "Hello, dude. Could you, please, enter A for me?\nA: ";
    cin >> a;
    cout << "And B\nB: ";
    cin >> b;
    s = a * b;
    cout << "And your squere is: " << s << "\n";
    TestSquare(a, b);

}