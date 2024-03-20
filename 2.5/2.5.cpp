//2.5.cpp
#include <iostream>
#include "Pair.h"
#include "Complex.h"

using namespace std;

int main() {
    Pair p1(2.0, 3.0);
    Pair p2(4, 5);
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    double first, second;
    cout << "Enter the first value: ";cin >> first;
    cout << "Enter the second value: ";cin >> second;
    Pair p3 = Pair(first, second) * p2;
    Pair p4 = Pair(first, second) + p2;
    cout << "Result of multiplication (Pair): " << p3 << endl;
    cout << "Result of addition (Pair): " << p4 << endl;
    cout << "p1++: " << p1++ << endl;
    cout << "p1--: " << p1-- << endl;
    cout << "++p2: " << ++p2 << endl;
    cout << "--p2: " << --p2 << endl;

    Complex c1(2, 3);
    Complex c2(4, 5);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    Complex c3 = c1 * c2;
    Complex c4 = c1 - c2;

    cout << "Result of multiplication (Complex): " << c3 << endl;
    cout << "Result of subtraction (Complex): " << c4 << endl;

    cout << "c1++: " << c1++ << endl;
    cout << "c1--: " << c1-- << endl;
    cout << "++c2: " << ++c2 << endl;
    cout << "--c2: " << --c2 << endl;
    return 0;
}
