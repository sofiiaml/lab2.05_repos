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

    Pair();//��� ���������
    Pair(double a, double b);//�����������
    Pair(const Pair&);//���������
   
    Pair& operator=(const Pair& p);//���������
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
