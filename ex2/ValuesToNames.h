 #pragma once
#include "Field.h"
#include <iostream>


template <typename T>
class ValuesToNames
{
public:
	ValuesToNames() {};
	~ValuesToNames();
	friend std::ostream & operator<<(const std::ostream & os, const T t);
	friend std::ifstream & operator>>(const std::ifstream & is, const T t);

private:
	T m_ValueName;

};


template <typename T>
std::ostream & operator<<(const std::ostream & os, const T t)
{
	os << t;
}

template <typename T>
std::ifstream & operator>>(const std::ifstream & is, const T t)
{
	is >> t;
}
