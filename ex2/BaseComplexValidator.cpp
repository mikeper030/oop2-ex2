#include "BaseComplexValidator.h"

BaseComplexValidator::BaseComplexValidator(const std::string&msg)
	:m_message(msg)
{
}

void BaseComplexValidator::printError(std::ostream & os) const
{
	os << m_message;
}


