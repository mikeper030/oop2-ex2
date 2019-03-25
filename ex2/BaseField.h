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

	virtual void readData() = 0;
	virtual void PrintData(const std::ostream & os) = 0;
	bool validator();
	void printMessege(std::ostream & os);
	void printError(std::ostream & os);


	~BaseField();
private:
	std::string m_messeng;
protected:
	std::vector<std::unique_ptr<BaseValidator>> m_validator;

};

