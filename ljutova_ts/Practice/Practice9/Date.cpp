#include "Date.h" 
#include <iostream> 

using namespace std;

Date::Date()
{
    d = 1;
    m = 1;
    y = 1;
}

Date::Date(int _d, int _m, int _y)
{
	if (_y <= 0)
		throw Date1();
	if ((_m <= 0) || (_m > 12))
        throw Date1();
	if ((_d <= 0) || (_d > 31))
        throw Date1();
	if (_m == 2)
	{
		if (((_y % 4) == 0) || ((_y % 400) == 0) || ((_y % 100) != 0))
		{
			if ((_d <= 0) || (_d > 29))
                throw Date1();
		}
		else
		{
			if ((_d <= 0) || (_d > 28))
                throw Date1();
		}
	}


	d = _d;
	m = _m;
	y = _y;

}

//����������� 
Date::Date(const Date& x)
{
	d = x.d;
	m = x.m;
	y = x.y;
}

//���������� 
Date::~Date()
{
	d = 0;
	m = 0;
	y = 0;
}

bool Date::operator==(const Date& x) const
{
	if ((d != x.d) || (m != x.m) || (y != x.y))
		return false;
	return true;
}

const Date& Date::operator=(const Date& x)
{
	if (&x == this)
		return *this;
	d = x.d;
	m = x.m;
	y = x.y;
	return *this;
}

ostream & operator<<(ostream & o, const Date & x)
{
	o << x.d << x.m << x.y << " ";
	return o;
}

istream & operator>>(istream & o, Date & x)
{
	o >> x.d >> x.m >> x.y;
	return o;
}

const char* Date1::what() const
{
    return what_str.c_str();
}