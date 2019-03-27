#include "IdValidator.h"
#include "Field.h"


IdValidator::IdValidator()
	:BaseValidator(" Wrong control digit ")
{
}

bool IdValidator::check(BaseField & obj) 
{
	std::string name = std::to_string(dynamic_cast<Field<uint32_t>&>(obj).getField());

	int nSum = 0;
	int nDigits = name.length();
	int nParity = (nDigits - 1) % 2;
	char cDigit[2] = "\0";
	for (int i = nDigits; i > 0; i--)
	{
		cDigit[0] = name[i - 1];
		int nDigit = atoi(cDigit);

		if (nParity == i % 2)
			nDigit = nDigit * 2;

		nSum += nDigit / 10;
		nSum += nDigit % 10;
	}
	return 0 == nSum % 10;
}


IdValidator::~IdValidator()
{
}
