#pragma once
#include "BaseField.h"
#include <memory>
template <typename T>
class Field :public BaseField
{
public:


	Field(std::string mes):BaseField(mes) {};

	virtual void addValidetor(BaseValidator * validator)
	{
		m_validator.push_back(validator);
	}
	
	T getField();

	virtual void readData()override;

	virtual void PrintData(std::ostream & os);

	~Field();

private:

	T m_field;

};

template <typename T>
inline T Field<T>::getField()
{
	return m_field;
}

template<typename T>
inline void Field<T>::readData()
{
	std::cin >> m_field;
}

template<typename T>
inline void Field<T>::PrintData(std::ostream & os)
{
	os << m_field;
}