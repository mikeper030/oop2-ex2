#pragma once
#include "Field.h"
#include "BaseValidator.h"
#include<string>
//============================================
//	NoDigitValidator
//=============================================
class NoDigitValidator :public BaseValidator
{
//===================   public  =========================

public:
	//ctor
	NoDigitValidator();
	// check if Name is valid
	bool check(BaseField & obj) const override;
	

};

