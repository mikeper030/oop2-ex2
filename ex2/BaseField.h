#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class BaseValidator;
class BaseField
{
public:
	BaseField(const std::string &message) :m_message(message) {};
	
	virtual void addValidator(BaseValidator * validator);
	
	virtual void readData() = 0;
	
	
	virtual bool validate();
	
	virtual void printData(std::ostream & os) const = 0;
    
	void printMessage(std::ostream & os);
	
	void printError(std::ostream & os);


private:
	std::string m_message;
	std::vector<BaseValidator*> m_validators;

};

