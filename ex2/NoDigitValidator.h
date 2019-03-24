#pragma once
#include "Field.h"
#include "BaseValidator.h"
class NoDigitValidator :public BaseValidator
{
public:
	NoDigitValidator();
	virtual bool checking()override;
	~NoDigitValidator();
};

