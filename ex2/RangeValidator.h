#pragma once
#include "BaseValidator.h"
#include "ValuesToNames.h"
#include "DestinationNames.h"
#include "ClassNames.h"
template <typename T>
class RangeValidator :public BaseValidator
{
public:

	RangeValidator(const int&, const int&);
	
	bool check(BaseField&) const override;


private:
	T m_valid;
	int m_min, m_max;
};

template<typename T>
inline RangeValidator<T>::RangeValidator(const int&f, const int&l)
	:m_min(f), m_max(l),BaseValidator(" Out of range ") 
{
}

template<>
inline RangeValidator<ValuesToNames<ClassNames>>::RangeValidator(const int &l, const int &r)
	:m_min(l),m_max(r),BaseValidator(" Out of range ")
{
}

template<typename T>
inline bool RangeValidator<T>::check(BaseField & obj) const
{
	T data = dynamic_cast<Field<T>&>(obj).getData();

	if (data < m_min || data > m_max)
		return false;

	return true;
}


