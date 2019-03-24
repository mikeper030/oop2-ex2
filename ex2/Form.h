#pragma once
#include "Field.h"
#include "BaseField.h"
#include <vector>
#include <memory>
#include <iostream>


class Form
{
public:
	Form();
	void addField(BaseField* field);
	//void addValidator();
	void fillForm();
	~Form();
private:
	std::vector<std::unique_ptr<BaseField>> m_field;
};

