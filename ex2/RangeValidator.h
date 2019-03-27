#pragma once
#include "BaseValidator.h"
#include "BaseField.h"

template <typename T>
class RangeValidator :public BaseValidator
{
public:
	RangeValidator(int f, int l) :m_first(f), m_last(l),BaseValidator(" Out of range ")
	{}
	virtual bool check(BaseField & obj) {
		int year = (dynamic_cast<Field<int>&>(obj).getField());
		if (year < m_first || year >m_last)
			return false;
		return true;
	}

	~RangeValidator()
	{}


private:
	T m_valid;
	int m_first, m_last;
};

//template<typename T>
//inline RangeValidator<T>::RangeValidator(int f, int l)
//	:m_first(f), m_last(l),BaseValidator(" Out of range ") 
//{
//}

//template<typename T>
//inline bool RangeValidator<T>::check(BaseField * obj)const
//{
//	return false;
//}
