#pragma once
#include "Field.h"
#include "BaseValidator.h"
#include<string>

class NoDigitValidator :public BaseValidator
{
public:
	NoDigitValidator();

	bool check(BaseField & obj) const override;
	
	
	

};

