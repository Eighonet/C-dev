#pragma once
#include <iostream>
#include <sstream>

class Rational {
public:
	Rational() {}
	explicit Rational(const int upp);
	Rational(const int upp, const int bot);
	bool operator==(const Rational& rhs) const {
		return (num == rhs.num) && (den == rhs.den);
	}
	bool operator!=(const Rational& rhs) const { return !operator==(rhs); }

	Rational& operator+=(const Rational& rhs);
	Rational& operator+=(const int rhs) { return operator+=(Rational(rhs)); }

	Rational& operator-=(const Rational& rhs);
	Rational& operator-=(const int rhs) { return operator-=(Rational(rhs)); }

	Rational& operator*=(const Rational& rhs);
	Rational& operator*=(const int rhs) { return operator*=(Rational(rhs)); }

	Rational& operator/=(const Rational& rhs);
	Rational& operator/=(const int rhs) { return operator*=(Rational(rhs)); }

	std::ostream& writeTo(std::ostream& ostrm) const;
	std::istream& readFrom(std::istream& istrm);

	int num{ 0 };
	int den{ 0 };

	static const char leftBrace{ '{' };
	static const char separator{ '/' };
	static const char rightBrace{ '}' };

	int NOD(int x, int y);
	void Rationalized(Rational k);
	Rational testParse(const std::string& str);
};



Rational operator+(const Rational& lhs, const Rational& rhs);
Rational operator-(const Rational& lhs, const Rational& rhs);


Rational operator*(const Rational& lhs, const Rational& rhs);
Rational operator/(const Rational& lhs, const Rational& rhs);


inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs) {
	return rhs.writeTo(ostrm);
}

inline std::istream& operator >> (std::istream& istrm, Rational& rhs) {
	return rhs.readFrom(istrm);
}