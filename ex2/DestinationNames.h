#pragma once
#include "BaseValidator.h"
#include <iostream>
#include <map>
#include "BaseNames.h"
class DestinationNames : public BaseNames
{
public:
	DestinationNames();
	int getMinIndex() const override;
	int getMaxIndex() const override;

};

