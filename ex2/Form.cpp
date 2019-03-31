#include "Form.h"
#include <iostream>
#include "BaseField.h"


Form::Form()
{
}

void Form::addField(BaseField* field)
{
	m_field.push_back(field);
}


void Form::fillForm()
{
	
	for (size_t i = 0; i < m_field.size(); i++)
	{
		m_field[i]->printMessege(std::cout);
		std::cout << std::endl;
		m_field[i]->readData();
	}
}

bool Form::validateForm()
{
	return false;
}



Form::~Form()
{
}

std::ostream & operator<<(std::ostream & os, const Form & obj)
{
	// TODO: insert return statement here
}
