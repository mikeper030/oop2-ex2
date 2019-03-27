#pragma once

#include <vector>
#include <iostream>
#include "BaseDesToClass_DesToCurre.h"
#include "BaseField.h"




class Form
{
public:
	Form();
	void addField(BaseField*  field);
//	void addValidator();
	void fillForm();
	bool validateForm();
	friend std::ostream& operator<<(std::ostream& os, const Form& obj);
	~Form();
private:
	std::vector<BaseField*> m_field;
	//std::vector<std::unique_ptr<BaseDesToClass_DesToCurre>> m_field;

};

std::ostream& operator<<(std::ostream& os, const Form& obj);


