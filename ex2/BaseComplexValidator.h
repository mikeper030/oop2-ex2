#pragma once
#include <string>
#include "BaseField.h"
class BaseComplexValidator
{
public:
	BaseComplexValidator(const std::string&msg);
		
	virtual bool check() const = 0;

		
	virtual void readData() = 0;

	//Description:	
	void printError(std::ostream &) const;
private:
	std::string m_message;
};

