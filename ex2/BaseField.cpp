#include "BaseField.h"
#include "BaseValidator.h"

void BaseField::addValidator(BaseValidator * validator)
{
	m_validators.push_back(validator);
}

bool BaseField::validate()
{
	for (auto& validator : m_validators)
		if (!validator->check(*this))
			return false;

	return true;
}

void BaseField::printMessage(std::ostream & os)
{
	os << m_message;
}

void BaseField::printError(std::ostream & os)
{
	for (const auto& validator : m_validators)
		if (!validator->check(*this))
			validator->printError(os);
}


