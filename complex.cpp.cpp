#include "complex.h"

ostream & operator<<(ostream& print, Complex c)
{
	print << c.getreal() << " + " << c.getimaginary() << "i\n";
	return print;
}
Complex::Complex()
{
}
Complex::Complex(double x, double y)
{

	re = x;
	im = y;

}
double Complex::getreal()
{
	return re;
}
void Complex::setreal(double x)
{
	re = x;
}
void Complex::setimaginary(double x)
{
	im = x;
}
double Complex::getimaginary()
{
	return im;
}
Complex Complex::operator+(Complex input)
{
	Complex temp(1, 1);
	temp.setreal(re + input.getreal());
	temp.setimaginary(im + input.getimaginary());
	return temp;
}
Complex Complex::operator-(Complex input)
{
	Complex temp(1, 1);
	temp.setreal(re - input.getreal());
	temp.setimaginary(im - input.getimaginary());
	return temp;
}
Complex Complex::operator* (Complex input)
{
	Complex temp(1, 1);
	double a = re, b = im;
	temp.setreal(-(input.getimaginary()*im) + (re*input.getreal()));
	temp.setimaginary((input.getimaginary()*a) + (input.getreal()*b));
	return temp;
}
Complex& Complex::operator/(Complex input)
{
	try
	{
		if ((input.getimaginary() == 0) && (input.getreal() == 0))
			throw 0;

		Complex conjugate(input.getreal(), (-1 * input.getimaginary()));

		Complex numerator = (*this) * conjugate;

		Complex denominator = input * conjugate;

		Complex multiple(1, 1);
		if (denominator.getimaginary() == 0)
		{
			multiple.setreal(1 / denominator.getreal());
			multiple.setimaginary(0);
		}
		if (denominator.getreal() == 0)
		{
			multiple.setimaginary(1 / denominator.getimaginary());
			multiple.setreal(0);
		}

		Complex *Result = new Complex;
			*Result=numerator * multiple;
		return *Result;
	}
	catch (double x)
	{

		cout << "Error! Divison By Zero\n";
	}
	return *this;
}
