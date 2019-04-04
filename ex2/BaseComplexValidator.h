#pragma once
#include <string>
#include "BaseField.h"
#include "DestinationNames.h"



class BaseComplexValidator
{
//=======================   public   =============================
              
public:
	//ctor 
	BaseComplexValidator(const std::string&msg);
		
	//this function check if validator between two field is good 
	//pure virtual (polimorphisam)
	virtual bool check() const = 0;
		
	//input of two field
	virtual void readData() = 0;
	
	//output of error in validation
	void printError(std::ostream &) const;

//=================     private members    =========================

private:
	
	std::string m_message;
};

