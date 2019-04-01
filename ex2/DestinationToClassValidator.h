#pragma once
#include "BaseXtoYValidator.h"
template <typename T>
class DestinationToClassValidator :public BaseXtoYValidator
{
public:
	DestinationToClassValidator() {}

	~DestinationToClassValidator() {}
private:
	T m_valid;

};

