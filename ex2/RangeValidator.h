#pragma once
template <typename T>
class RangeValidator :public BaseValidator
{
public:
	RangeValidator(int f, int l):m_first(f),m_last(l) {};
	~RangeValidator();


private:
	T m_valid;
	int m_first, m_last;
};

