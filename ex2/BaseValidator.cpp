#include "BaseValidator.h"




BaseValidator::BaseValidator()
{
}

void BaseValidator::printError( std::ostream & os)
{
	os << m_message;
}

BaseValidator::~BaseValidator()
{
}
