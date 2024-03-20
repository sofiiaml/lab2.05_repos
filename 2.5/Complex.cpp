// Complex.cpp
#include "Complex.h"
#include <iostream>

Complex::Complex() : pair(0, 0) {}
Complex::Complex(double re, double im) : pair(re, im) {}
Complex::Complex(const Complex& c) {
    *this = c;
}

Complex& Complex::operator=(const Complex& c) {
    pair = c.pair;
    return *this;
}
Complex operator*(const Complex& first, const Complex& second) {
    double re = first.pair.getFirst() * second.pair.getFirst() - first.pair.getSecond() * second.pair.getSecond();
    double im = first.pair.getFirst() * second.pair.getSecond() + first.pair.getSecond() * second.pair.getFirst();
    return Complex(re, im);
}
Complex operator-(const Complex& first, const Complex& second) {
    double re = first.pair.getFirst() - second.pair.getFirst();
    double im = first.pair.getSecond() - second.pair.getSecond();
    return Complex(re, im);
}
double Complex::getRe() const { return pair.getFirst(); }

double Complex::getIm() const { return pair.getSecond(); }

void Complex::setRe(double re) { pair.setFirst(re); }

void Complex::setIm(double im) { pair.setSecond(im); }

Complex::operator string() const {
    return "(" + to_string(getRe()) + " + " + to_string(getIm()) + "i)";
}
ostream& operator<<(ostream& out, const Complex& c) {
    out << string(c);
    return out;
}
istream& operator>>(istream& in, Complex& c) {
    cout << "Enter the real part: ";
    double re;
    in >> re;
    cout << "Enter the imaginary part: ";
    double im;
    in >> im;
    return in;
}
Complex& Complex::operator ++() {
    pair++;
    return *this;
}
Complex& Complex::operator --() {
    pair--;
    return *this;
}
Complex Complex::operator++(int) {
    Complex tmp = *this;
    ++*this;
    return tmp;
}
Complex Complex::operator--(int) {
    Complex tmp = *this;
    --*this;
    return tmp;
}