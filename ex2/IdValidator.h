#pragma once
#include "BaseValidator.h"
#include "Field.h"

//============================================
//	IdValidator
//=============================================
class IdValidator :public BaseValidator
{
//===================   public  =========================
public:
	//ctor
	IdValidator();

	//check if ID is valid
	virtual bool check(BaseField&) const override;
};

