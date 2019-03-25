#pragma once
#include <memory>
#include <vector>
#include<iostream>


class BaseValidator
{
public:
	BaseValidator(const std::string & str) :m_message(str) {};
	void printError(std::ostream & os);
	virtual bool check(BaseField & obj)const = 0;
	virtual ~BaseValidator();

private:
	std::string  m_message;
};

