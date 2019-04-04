#include "BaseComplexValidator.h"
//=========================================================
//                 ctor
//=========================================================
BaseComplexValidator::BaseComplexValidator(const std::string&msg)
	:m_message(msg)
{
}
//=========================================================
//                 print error
//=========================================================
void BaseComplexValidator::printError(std::ostream & os) const
{
	os << m_message;
}


