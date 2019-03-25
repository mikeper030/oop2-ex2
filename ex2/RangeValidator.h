#pragma once
template <typename T>
class RangeValidator :public BaseValidator
{
public:
	RangeValidator(int f, int l);
	~RangeValidator();


private:
	T m_valid;
	int m_first, m_last;
};

template<typename T>
inline RangeValidator<T>::RangeValidator(int f, int l)
	:m_first(f), m_last(l),BaseValidator(" Out of range ") 
{
}
