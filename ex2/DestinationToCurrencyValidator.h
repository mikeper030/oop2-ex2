#pragma once
#include "BaseXtoYValidator.h"

template <typename T>
class DestinationToCurrencyValidator :public BaseXtoYValidator
{
public:
	DestinationToCurrencyValidator() {}


	~DestinationToCurrencyValidator() {}
private:
	T m_valid;
};

