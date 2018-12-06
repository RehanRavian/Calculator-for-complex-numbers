#pragma once
#include<iostream>
using namespace std;
class Complex
{
private:
	double re;
	double im;
public:
	Complex();
	Complex(double, double);
	double getreal();
	double getimaginary();
	void setreal(double);
	void setimaginary(double);
	Complex  operator+(Complex input);
	Complex  operator-(Complex input);
	Complex  operator*(Complex input);
	Complex  &operator/(Complex input);
	friend ostream& operator<<(ostream&, Complex);
};
