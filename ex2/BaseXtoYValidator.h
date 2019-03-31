#pragma once
#include <string>
class BaseXtoYValidator
{
public:
	BaseXtoYValidator(const std::string);
	
	virtual bool check() const = 0;
	
	virtual void readData() = 0;

	void printError(std::ostream &) const;

private:
	std::string m_message;
};

