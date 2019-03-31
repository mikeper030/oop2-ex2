#pragma once
#include <map>
#include "BaseNames.h"
class ClassNames : public BaseNames
{
public:
	ClassNames();
	int getMinIndex() const override;
	int getMaxIndex() const override;
};

