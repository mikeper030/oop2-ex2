#pragma once
#include "BaseValidator.h"
#include "ValuesToNames.h"
#include "DestinationNames.h"
#include "ClassNames.h"

//============================================
//	template class 
//=============================================
template <typename T>
class RangeValidator :public BaseValidator
{
//===================   public  =========================
public:
	//ctor
	RangeValidator(const int&, const int&);
	
	//check if number of user in range
	bool check(BaseField&) const override;


//========================    privat   =========================
private:
	T m_valid;
	int m_min, m_max;
};
//========================================================================================
//									ctor
//========================================================================================
template<typename T>
inline RangeValidator<T>::RangeValidator(const int&f, const int&l)
	:m_min(f), m_max(l),BaseValidator(" Out of range ") 
{
}
//========================================================================================
//									ctor
//========================================================================================
template<>
inline RangeValidator<ValuesToNames<ClassNames>>::RangeValidator(const int &l, const int &r)
	:m_min(l),m_max(r),BaseValidator(" Out of range ")
{
}
//========================================================================================
//							check if number of user in range
//========================================================================================
template<typename T>
inline bool RangeValidator<T>::check(BaseField & obj) const
{
	T data = dynamic_cast<Field<T>&>(obj).getData();

	if (data < m_min || data > m_max)
		return false;

	return true;
}


