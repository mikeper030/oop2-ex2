#pragma once
#include "Field.h"
#include <iostream>


template <typename T>
class ValuesToNames
{
public:
	ValuesToNames();
	~ValuesToNames();
private:
	T m_ValueName
};

template <typename T>
std::ostream & operator<<(const std::ostream & os, const T t)
{

}

