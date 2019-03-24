#pragma once
#include "BaseField.h"
#include <memory>

template <typename T>
class Field :public BaseField
{
public:
	Field(T& t1):m_field(t1) {};
	virtual void addValidetor(BaseValidator * validator)
	{
		m_validators.push_back(validator);
	}
	T getField();

	
private:
	T m_field;
};

template <typename T>
inline T Field<T>::getField()
{
	return m_field;
}