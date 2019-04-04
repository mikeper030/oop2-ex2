#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class BaseValidator;


//============================================
//	BaseField
//=============================================
class BaseField
{
//==========================  public   =========================
public:
	//ctor
	BaseField(const std::string &message) :m_message(message) {};
	
	//adding validator to vector of validator
	virtual void addValidator(BaseValidator * validator);
	
	//input of user (pure virtual function) 
	virtual void readData() = 0;
	
	//validation of all field
	virtual bool validate();
	
	//print field
	virtual void printData(std::ostream & os) const = 0;
    
	//print message to user
	void printMessage(std::ostream & os);
	
	//print error if thae user input is wornge
	void printError(std::ostream & os);

//==========================  private   =========================

private:
	std::string m_message;
	std::vector<BaseValidator*> m_validators;

};

