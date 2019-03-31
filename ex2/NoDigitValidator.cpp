#include "NoDigitValidator.h"



//***************************************************************************//
//**							 NoDigitValidator	
//***************************************************************************//
NoDigitValidator::NoDigitValidator()
	:BaseValidator::BaseValidator("Can't contain digits")
{
}



//***************************************************************************//
//**							 check	
//***************************************************************************//
bool NoDigitValidator::check(BaseField& obj) const
{
	std::string data = dynamic_cast<Field<std::string>&>(obj).getData();

	if (data.empty())
		return false;

	for (int i = 0; i < int(data.length()); i++)
		if (isdigit(data[i]))
			return false;

	return true;
}

