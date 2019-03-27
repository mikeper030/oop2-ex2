#pragma once
#include "BaseValidator.h"
#include "BaseField.h"


class IdValidator :public BaseValidator
{
public:
	IdValidator();

	virtual bool check(BaseField & obj);

	~IdValidator();
};

