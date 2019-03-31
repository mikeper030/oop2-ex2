#include "BaseXtoYValidator.h"



BaseXtoYValidator::BaseXtoYValidator(const std::string msg)
   :m_message(msg)
{
}

void BaseXtoYValidator::printError(std::ostream & os) const
{
	os << m_message;
}
