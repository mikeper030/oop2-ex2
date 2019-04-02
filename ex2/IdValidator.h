#pragma once
#include "BaseValidator.h"
#include "Field.h"
class IdValidator :public BaseValidator
{
public:
	
	IdValidator();
	virtual bool check(BaseField&) const override;
};

