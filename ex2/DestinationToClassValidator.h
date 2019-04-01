#pragma once
#include "BaseComplexValidator.h"
#include "BaseField.h"
template <typename T,typename D>
class DestinationToClassValidator :public BaseComplexValidator
{
public:
	DestinationToClassValidator(T*,D*);
		
	bool check() const override;
	void readData() override;
private:
	T* field_a;
	D* field_b;
};

template<typename T, typename D>
inline DestinationToClassValidator<T, D>::DestinationToClassValidator(T*a,D*b)
	:BaseComplexValidator("Destination and class do not match"), field_a(a), field_b(b)
{
}

template<typename T, typename D>
inline bool DestinationToClassValidator<T, D>::check() const
{
	if (field_a->getData() == 1||field_a->getData()==2)
		return field_b->getData() == 1||field_b->getData()==2;

	if (field_a->getData() == 3)
		return true;

	if (field_a->getData() == 4 || field_a->getData() == 5)
		return field_b->getData() == 2 || field_b->getData() == 3;
	
	return false;
}
template<typename T, typename D>
inline void DestinationToClassValidator<T, D>::readData()
{
	field_a->printMessage(std::cout);
	std::cout << std::endl;
	field_a->readData();

	field_b->printMessage(std::cout);
	std::cout << std::endl;
	field_b->readData();
}
