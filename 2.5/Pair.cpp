// Pair.cpp
#include "Pair.h"
#include <iostream>
Pair::Pair() : first(0), second(0) {}

Pair::Pair(double a, double b) : first(a), second(b) {}

Pair::Pair(const Pair& p) {
    *this = p;
}
Pair& Pair::operator=(const Pair& p) {
    first = p.first;
    second = p.second;
    return *this;
}
Pair operator+(const Pair& first, const Pair& second) {
    return Pair(first.getFirst() + second.getFirst(), first.getSecond() + second.getSecond());
}
Pair operator*(const Pair& first, const Pair& second) {
    return Pair(first.getFirst() * second.getFirst(), first.getSecond() * second.getSecond());
}
Pair::operator string() const {
    return "(" + to_string(first) + ", " + to_string(second) + ")";
}
ostream& operator<<(ostream& out, const Pair& p) {
    out << string(p);
    return out;
}
istream& operator>>(istream& in, Pair& p) {
    double first, second;
    cout << "Enter the first value: ";in >> first;
    cout << "Enter the second value: ";in >> second;
    return in;
}
Pair& Pair::operator ++() {
    first++;second++;
    return *this;
}
Pair& Pair::operator --() {
    first--;second--;
    return *this;
}
Pair Pair::operator++(int) {
    Pair tmp = *this;
    ++*this;
    return tmp;
}
Pair Pair::operator--(int) {
    Pair tmp = *this;
    --(*this);
    return tmp;
}