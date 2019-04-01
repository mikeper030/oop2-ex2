#pragma once
#include "BaseComplexValidator.h"

template <typename T,typename D>
class DestinationToCurrencyValidator :public BaseComplexValidator
{
public:
	DestinationToCurrencyValidator(T*,D*);
	bool check() const override;
	void readData() override;
private:
	T* field_a;
	D* field_b;
};

template<typename T, typename D>
inline DestinationToCurrencyValidator<T, D>::DestinationToCurrencyValidator(T*a,D*b)
	:BaseComplexValidator("Destination and currency do not mach"),field_a(a),field_b(b)
{
}

template<typename T, typename D>
inline bool DestinationToCurrencyValidator<T, D>::check() const
{
	
	if (field_a->getData()==3)
		return field_b->getData() == 3||field_b->getData()==1;

	if (field_a->getData() ==2||field_a->getData()==1)
		return field_b->getData() == 2 || field_b->getData() == 1;

	return true;

	
}

template<typename T, typename D>
inline void DestinationToCurrencyValidator<T, D>::readData()
{
	field_a->printMessage(std::cout);
	std::cout << std::endl;
	field_a->readData();

	field_b->printMessage(std::cout);
	std::cout << std::endl;
	field_b->readData();
}