#include "Form.h"
#include <iostream>
#include "BaseField.h"

static int n = 0;
//=================================================
//						c'tor
//=================================================
Form::Form()
{
}
//=================================================
//				Adding field to form 
//=================================================
void Form::addField(BaseField* field)
{
	m_fields.push_back(field);
}
//=================================================
//			 Adding complex validator  
//=================================================
void Form::addValidator(BaseComplexValidator *d)
{
	m_complex_validators.push_back(d);
}
//==================================================
//				filling form of user
//==================================================
void Form::fillForm()
{
	
	bool fieldsValid = true;

	for (const auto & field : m_fields)
		if (!field->validate()||n<6)
		{
			fieldsValid = false;

			field->printMessage(std::cout);
			std::cout << std::endl;
			field->readData();
			n++;
		}

	if (fieldsValid)
		for (const auto & validator : m_complex_validators)
			if (!validator->check())
			{
				validator->printError(std::cout);
				std::cout << std::endl;
				validator->readData();
			}
}
//============================================================
//				check if all validator is leagal
//============================================================
bool Form::validateForm()
{
	for (const auto & field : m_fields)
		if (!field->validate())
			return false;

	for (const auto & validator : m_complex_validators)
		if (!validator->check())
			return false;

	return true;
}
//=============================================================
//					operator output for form 
//=============================================================
std::ostream & operator<<(std::ostream & os, const Form & obj)
{
	for (const auto &field : obj.m_fields)
	{
		os << "----------------------------------------------------------\n";
		field->printMessage(os);
		os << " = ";
		field->printData(os);
		os << " ";
		field->printError(os);
		os << std::endl;
		os << "----------------------------------------------------------\n";
	}

	return os;
}
