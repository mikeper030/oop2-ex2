#pragma once
#include "BaseField.h"
#include <memory>
#include "DestinationNames.h"
#include"ValuesToNames.h"
#include "ClassNames.h"
template <class T>
class Field :public BaseField
{
public:
	
	Field(const std::string& mes)
		:BaseField(mes) {};
	
	T getData() const;

	void printData(std::ostream & os) const override;
	
	 void readData() override ;

private:
	
	T m_field;

};

//***************************************************************************//
//**							getData	
//***************************************************************************//
template<typename T>
inline T Field<T>::getData() const
{
	return m_field;
}

//***************************************************************************//
//**							printData	
//***************************************************************************//
template<typename T>
inline void Field<T>::printData(std::ostream & os) const
{
	os << m_field;
}

//***************************************************************************//
//**							readData	
//***************************************************************************//
template<typename T>
inline void Field<T>::readData()
{
	std::cin >> m_field;
}
