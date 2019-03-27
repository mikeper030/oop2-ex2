#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class BaseValidator;

class BaseField
{
public:
	BaseField(std::string &message) :m_messeng(message) {};
	virtual void addValidetor( BaseValidator * validator)=0;

	virtual void readData() = 0;
	virtual void PrintData( std::ostream & os) = 0;
	bool validator();
	void printMessege(std::ostream & os);
	void printError(std::ostream & os);


	virtual~BaseField();

private:
	std::string m_messeng;
protected:
	std::vector<BaseValidator*> m_validator;

};

