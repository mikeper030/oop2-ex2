#pragma once
#include <iostream>
#include "BaseNames.h"
#include "DestinationNames.h"
#include "ClassNames.h"
#include "CurrencyNames.h"

//============================================
//	template class ValuesToNames
//=============================================
template <typename T>
class ValuesToNames
{
//==========================  public   =========================
public:
	//ctor
	ValuesToNames();

	//return data of many kind
	T getData() const;

	
	int m_key;

//==========================  private   =========================

private:
	T val;
};

//=======================================================================================
//								global function
//=======================================================================================
std::ostream& operator<<(std::ostream& os,const  ValuesToNames<DestinationNames>& obj);
std::ostream& operator<<(std::ostream& os,const  ValuesToNames<ClassNames>& obj);
std::istream& operator>>(std::istream& is, ValuesToNames<ClassNames>& obj);
std::istream& operator>>(std::istream & is, ValuesToNames<DestinationNames>&  obj);
std::ostream& operator<<(std::ostream& os, const  ValuesToNames<CurrencyNames>& obj);
std::istream & operator>>(std::istream & is, ValuesToNames<CurrencyNames>&  obj);
bool operator==(const ValuesToNames<DestinationNames>&, const int&);
bool operator==(const ValuesToNames<ClassNames>&, const int&);
bool operator==(const ValuesToNames<CurrencyNames>&, const int&);

//====================================================
//				ctor
//====================================================
template<typename T>
inline ValuesToNames<T>::ValuesToNames()
{
}
//====================================================
//				get data template
//====================================================
template<typename T>
inline T ValuesToNames<T>::getData() const
{
	return val;
}
//====================================================
//
//====================================================
//template specializations//==================
template<>
inline ClassNames ValuesToNames<ClassNames>::getData() const
{
	return ClassNames ();
}
//====================================================
//
//====================================================
template<>
inline DestinationNames ValuesToNames<DestinationNames>::getData() const
{
	return DestinationNames();
}
//====================================================
//
//====================================================
template<>
inline CurrencyNames ValuesToNames<CurrencyNames>::getData() const
{
	return CurrencyNames();
}
//====================================================
//						operator <	
//====================================================
template <typename T>
bool operator<(const ValuesToNames<T>& left, const int& a)
{
	return left.m_key < a;
}

//====================================================
//						operator >	
//====================================================
template <typename T>
bool operator>(const ValuesToNames<T>& left, const int& a)
{
	return left.m_key > a;
}