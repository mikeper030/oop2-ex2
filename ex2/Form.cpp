#include "Form.h"
#include <iostream>
#include "BaseField.h"

static int n = 0;
Form::Form()
{
}

void Form::addField(BaseField* field)
{
	m_fields.push_back(field);
}


void Form::fillForm()
{
	
	bool fieldsValid = true;

	for (const auto & field : m_fields)
		if (!field->validate()||n<4)
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
