#pragma once
#include "Field.h"
#include "BaseField.h"
#include <vector>
#include <memory>
#include <iostream>
#include "BaseDesToClass_DesToCurre.h"
#include "BaseField.h"
#include "Field.h"



class Form
{
public:
	Form();
	void addField(BaseField * field);
	void addValidator();
	void fillForm();
	bool validateForm();
	~Form();
private:
	std::vector<std::unique_ptr<BaseField>> m_field;
	//std::vector<std::unique_ptr<BaseDesToClass_DesToCurre>> m_field;

};

