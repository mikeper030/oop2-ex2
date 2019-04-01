#pragma once
#include "Field.h"
#include "BaseField.h"
#include <vector>
#include <memory>
#include <iostream>
#include "BaseComplexValidator.h"
#include "BaseField.h"
#include "Field.h"



class Form
{
public:
	Form();
	void addField(BaseField * field);
	void addValidator(BaseComplexValidator*);
	void fillForm();
	bool validateForm();
	friend std::ostream& operator<<(std::ostream& os, const Form& obj);
	
private:
	std::vector<BaseField*> m_fields;
	std::vector<BaseComplexValidator*> m_complex_validators;
	
};

std::ostream& operator<<(std::ostream& os, const Form& obj);