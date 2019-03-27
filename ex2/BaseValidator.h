#pragma once
#include <memory>
#include <vector>
#include <iostream>
#include "BaseField.h"


class BaseValidator
{
public:
	BaseValidator();
	BaseValidator(const std::string & str) :m_message(str) {};
	void printError( std::ostream & os);
	virtual bool check(BaseField & obj)=0;
	virtual ~BaseValidator();

private:
	std::string  m_message;
};

