#include "BaseField.h"

#include "BaseValidator.h"


bool BaseField::validator()
{
	for (size_t i = 0; i < m_validator.size(); i++)
	{
		if (!m_validator[i]->check(*this))
			return false;
	}
	return true;
}

void BaseField::printMessege(std::ostream & os)
{
	os << m_messeng;
}

void BaseField::printError(std::ostream & os)
{	
	for (size_t i = 0; i < m_validator.size(); i++)
		if (!m_validator[i]->check(*this))
			m_validator[i]->printError(std::cout);
}

BaseField::~BaseField()
{
}
