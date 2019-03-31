#include "NoDigitValidator.h"



NoDigitValidator::NoDigitValidator()
	:BaseValidator(" Can't contain digits ")
{
}

bool NoDigitValidator::check(BaseField & obj)const
{
	std::string name = dynamic_cast<Field<std::string>&>(obj).getField();
	
	if (name.empty())
		return false;
	for (size_t i = 0; i < name.length(); i++)
	{
		if (isdigit(name[i]))
			return false;
	}
	return true;
}

NoDigitValidator::~NoDigitValidator()
{
}
