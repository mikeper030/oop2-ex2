#pragma once
#include "Field.h"
#include "BaseField.h"
#include <vector>
#include <memory>
#include <iostream>
#include "BaseComplexValidator.h"
#include "BaseField.h"
#include "Field.h"


//==================================================================//
// The class who respone on the all form 
//==================================================================//
class Form
{
public:
//========================   public   ================================
	
	//c'tor
	Form();

	//Adding field to form 
	void addField(BaseField * field);

	//Adding complex validator  
	void addValidator(BaseComplexValidator*);

	//filling form of user
	void fillForm();

	//check if all validator is leagal
	bool validateForm();

	//operator output for form 
	friend std::ostream& operator<<(std::ostream& os, const Form& obj);
	
private:
//=======================   private members   =============================

	//vector of pointer at kind of BaseField
	std::vector<BaseField*> m_fields;

	//vector of pointer at kind of BaseComplexValidator 
	std::vector<BaseComplexValidator*> m_complex_validators;
	
};
//global function
std::ostream& operator<<(std::ostream& os, const Form& obj);