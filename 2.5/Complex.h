// Complex.h 
#pragma once
#include <string>
#include "Pair.h"
using namespace std;

//#define COMPLEX_H

class Complex {
private:
    Pair pair;
public:
    Complex();
    Complex(double re, double im);
    Complex(const Complex&);

    double getRe() const;
    double getIm() const;
    void setRe(double re);
    void setIm(double im);

    Complex& operator=(const Complex& c);//присвоєння
    operator string() const;

    Complex& operator ++();
    Complex& operator --();
    Complex operator++(int);
    Complex operator--(int);

    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);

    friend Complex operator*(const Complex& first, const Complex& second);
    friend Complex operator-(const Complex& first, const Complex& second);
};
