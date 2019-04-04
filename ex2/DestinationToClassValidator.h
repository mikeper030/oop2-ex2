#pragma once
#include "BaseComplexValidator.h"
#include "BaseField.h"


//=========================================================
//             template class 
//=========================================================
template <typename T,typename D>
class DestinationToClassValidator :public BaseComplexValidator
{
//=====================     public    =======================

public:
	//ctor
	DestinationToClassValidator(T*,D*);

	//check validation between Destination  and Class name
	bool check() const override;

	//input of Destination and  Class name
	void readData() override;

//=====================     private    =======================
private:
	T* field_a;
	D* field_b;
};


//=========================================================
//              ctor   
//=========================================================
template<typename T, typename D>
inline DestinationToClassValidator<T, D>::DestinationToClassValidator(T*a,D*b)
	:BaseComplexValidator("Destination and class do not match"), field_a(a), field_b(b)
{
}

//=========================================================
//   check validation between Destination and Class name
//=========================================================
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

//=========================================================
//       input of Destination and Class name      
//=========================================================
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
