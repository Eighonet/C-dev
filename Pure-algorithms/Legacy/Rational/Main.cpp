// Copyright 2018 by Polevoy Dmitry under Free Public License 1.0.0

#include "Header.h"

Rational Rational::testParse(const std::string & str)
{
	using namespace std;
	istringstream istrm(str);
	Rational z;
	istrm >> z;

	try
	{
		if (z.den == 0)
		{
			throw 1;
		}
	}
	catch (int i)
	{
		std::cout << "Error " << i << ": - you can not divide any number by zero!" << std::endl;
		exit(1);
	}

	if (istrm.good()) {
		cout << "Read success: " << str << " -> " << z << endl;
	}
	else {
		cout << "Read error : " << str << " -> " << z << endl;
	}
	num = z.num;
	den = z.den;
	return z;
}



Rational::Rational(const int upp)
	: Rational(upp, 0) {
}

Rational::Rational(const int upp, const int bot)
	: num(upp), den(bot) {
		{
			try
			{
				if (bot == 0)
				{
					throw 1;
				}
			}
			catch (int i)
			{
				std::cout << "Error " << i << ": - you can not divide any number by zero!" << std::endl;
				exit(1);
			}
		};
}

Rational& Rational::operator+=(const Rational& rhs) {
	if (den == rhs.den) {
		num += rhs.num;
		Rationalized(*this);
		return *this;
	}
	else {
		num = (num*(rhs.den)) + (rhs.num)*(den);
		den *= (rhs.den);
		Rationalized(*this);
		return *this;
	}

}

Rational& Rational::operator-=(const Rational & rhs)
{
	if (den == rhs.den) {
		num -= rhs.num;
		Rationalized(*this);
		return *this;
	}
	else {
		num = (num*(rhs.den)) - (rhs.num)*(den);
		den *= (rhs.den);
		Rationalized(*this);
		return *this;
	}
}


Rational operator+(const Rational& lhs, const Rational& rhs) {
		Rational k(lhs);
		k += rhs;
		return k;
}


Rational operator-(const Rational& lhs, const Rational& rhs) {
		Rational k(lhs);
		k -= rhs;
		return k;
}

Rational operator*(const Rational & lhs, const Rational & rhs)
{
	Rational k(lhs);
	k *= rhs;
	return k;
}

Rational operator/(const Rational & lhs, const Rational & rhs)
{
	Rational k(lhs);
	k /= rhs;
	return k;
}

Rational & Rational::operator*=(const Rational & rhs)
{
	num *= (rhs.num);
	den *= (rhs.den);
	Rationalized(*this);
	return *this;
}

Rational & Rational::operator/=(const Rational & rhs)
{
	num *= (rhs.den);
	den *= (rhs.num);
	Rationalized(*this);
	return *this;
}


std::ostream& Rational::writeTo(std::ostream& ostrm) const {
	ostrm << leftBrace << num << separator << den << rightBrace;
	return ostrm;
}

std::istream& Rational::readFrom(std::istream& istrm) {
	char leftBrace(0);
	int upp(0.0);
	char comma(0);
	int imaganary(0.0);
	char rightBrace(0);
	istrm >> leftBrace >> upp >> comma >> imaganary >> rightBrace;
	if (istrm.good()) {
		if ((Rational::leftBrace == leftBrace) && (Rational::separator == comma) &&
			(Rational::rightBrace == rightBrace)) {
			num = upp;
			den = imaganary;
		}
		else {
			istrm.setstate(std::ios_base::failbit);
		}
	}
	return istrm;
}

int Rational::NOD(int x, int y) {
	if (y == 0) return x;
	return NOD(y, x % y);
}

void Rational::Rationalized(Rational k){
	int red = NOD(num, den);
	num = num / red;
	den = den / red;
}

