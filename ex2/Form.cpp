#include "Form.h"
#include <iostream>


static int n = 0;
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
		if (!m_field[i]->validator() || n < 3) {
			m_field[i]->printMessege(std::cout);
			std::cout << std::endl;
			m_field[i]->readData();
			std::cout << std::endl;
			n++;
		}
	}
}

bool Form::validateForm()
{
	int i = 0;
	for (; i < m_field.size(); i++)
	{
		if (!m_field[i]->validator())
			return false;
	}
	/*if (i == m_field.size())
	{
		
	}*/
	return true;
}



Form::~Form()
{
}

std::ostream & operator<<(std::ostream & os, const Form & obj)
{
	for (size_t i = 0; i < obj.m_field.size(); i++)
	{
		obj.m_field[i]->printMessege(std::cout);
		std::cout <<std::endl;
		obj.m_field[i]->PrintData(std::cout);
		std::cout << std::endl;
		obj.m_field[i]->printError(std::cout);
		std::cout << std::endl;
	}
	return os;
}
