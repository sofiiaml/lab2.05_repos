//Pair.h
#pragma once
#include <string>
using namespace std;

class Pair
{
private:
    double first;
    double second;

public:
    double getFirst() const { return first; }
    double getSecond() const { return second; }

    void setFirst(double a) { first = a; }
    void setSecond(double b) { second = b; }

    Pair();//без аргументів
    Pair(double a, double b);//ініціалізації
    Pair(const Pair&);//копіювання
   
    Pair& operator=(const Pair& p);//присвоєння
    friend Pair operator+(const Pair& first, const Pair& second);
    friend Pair operator*(const Pair& first, const Pair& second);
    operator string() const;

    Pair& operator ++();
    Pair& operator --();
    Pair operator++(int);
    Pair operator--(int);
    friend ostream& operator<<(ostream& out, const Pair& p);
    friend istream& operator>>(istream& in, Pair& p);
};
