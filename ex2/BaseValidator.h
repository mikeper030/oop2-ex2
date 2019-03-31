#pragma once
#include <memory>
#include <vector>
#include<iostream>
#include "BaseField.h"

class BaseValidator
{
public:
	BaseValidator(const std::string & str) :m_message(str) {};
	void printError(std::ostream & os)
	{
	 os << m_message;	
	}
	
	//Description:	
	virtual bool check(BaseField&) const = 0;
	

private:
	std::string  m_message;
};

