#pragma once
#include "Field.h"
#include "BaseField.h"
#include "BaseValidator.h"
#include<string>

class NoDigitValidator :public BaseValidator
{
public:
	NoDigitValidator();
	virtual bool check(BaseField & obj) ;
	~NoDigitValidator();
};

