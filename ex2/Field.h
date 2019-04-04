#pragma once
#include "BaseField.h"
#include <memory>
#include "DestinationNames.h"
#include"ValuesToNames.h"
#include "ClassNames.h"


//============================================
//	template class
//=============================================
template <class T>
class Field :public BaseField
{
//===================   public  =========================

public:
	
	//ctor
	Field(const std::string& mes)
		:BaseField(mes) {};
	//this function return data member of T
	T getData() const;

	//print the field
	void printData(std::ostream & os) const override;
	
	//input of field
	 void readData() override ;

//========================    privat   =========================
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
