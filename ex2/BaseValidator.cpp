#include "BaseValidator.h"




void BaseValidator::printError( std::ostream & os)
{
	os << m_message;
}

BaseValidator::~BaseValidator()
{
}
