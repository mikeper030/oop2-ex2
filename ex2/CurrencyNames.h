#pragma once
#include "BaseNames.h"
class CurrencyNames :public BaseNames
{
public:
	CurrencyNames();

	int getMinIndex() const override;

	int getMaxIndex() const override;
	
};

