#pragma once
#include <iostream>
#include <string>
#include "BaseValidator.h"
#include <vector>
#include <memory>
class BaseField
{
public:
	BaseField(std::string &message) :m_messeng(message) {};
	virtual void addValidetor( BaseValidator * validator)=0;
	~BaseField();
private:
	std::string m_messeng;
protected:
	std::vector<std::unique_ptr<BaseValidator>> m_validator;

};

