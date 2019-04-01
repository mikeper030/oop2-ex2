#pragma once
#include <iostream>
#include "BaseNames.h"
#include "DestinationNames.h"
#include "ClassNames.h"
template <typename T>
class ValuesToNames
{
public:
	ValuesToNames();
	T getData() const;
	int m_key;
private:
	T val;
};
std::ostream& operator<<(std::ostream& os,const  ValuesToNames<DestinationNames>& obj);
std::ostream& operator<<(std::ostream& os,const  ValuesToNames<ClassNames>& obj);
std::istream& operator>>(std::istream& is, ValuesToNames<ClassNames>& obj);
std::istream & operator>>(std::istream & is, ValuesToNames<DestinationNames>&  obj);

template<typename T>
inline ValuesToNames<T>::ValuesToNames()
{
}
template<typename T>
inline T ValuesToNames<T>::getData() const
{
	return val;
}
//template specializations//==================
template<>
inline ClassNames ValuesToNames<ClassNames>::getData() const
{
	return ClassNames ();
}

template<>
inline DestinationNames ValuesToNames<DestinationNames>::getData() const
{
	return DestinationNames();
}
template <typename T>
//===================================================================
bool operator<(const ValuesToNames<T>& left, const int n)
{   
	if (left.m_key < n)
		return true;

	return false;
}

//***************************************************************************//
//**							operator>	
//***************************************************************************//
template <typename T>
bool operator>(const ValuesToNames<T>& left, const int n)
{
	if (left.m_key > n)
		return true;

	return false;
}