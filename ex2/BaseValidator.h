#pragma once
#include <memory>
#include <vector>
#include<iostream>
#include "BaseField.h"

//============================================
//	BaseValidator
//=============================================
class BaseValidator
{
//==========================  public   =========================

public:
	//ctor
	BaseValidator(const std::string & str) :m_message(str) {};

	//printError of validator
	void printError(std::ostream & os)
	{
	 os << m_message;	
	}
	
	//check the field by use validator
	virtual bool check(BaseField&) const = 0;
	
//==========================  private   =========================

private:
	std::string  m_message;
};

