#include "BaseField.h"
#include "BaseValidator.h"


//==========================================================
//			ctor
//==========================================================
void BaseField::addValidator(BaseValidator * validator)
{
	m_validators.push_back(validator);
}
//==========================================================
//			validation of all field
//==========================================================
bool BaseField::validate()
{
	for (auto& validator : m_validators)
		if (!validator->check(*this))
			return false;

	return true;
}
//==========================================================
//			print message to user
//==========================================================
void BaseField::printMessage(std::ostream & os)
{
	os << m_message;
}
//==========================================================
//		print error if thae user input is wornge
//==========================================================
void BaseField::printError(std::ostream & os)
{
	for (const auto& validator : m_validators)
		if (!validator->check(*this))
			validator->printError(os);
}


