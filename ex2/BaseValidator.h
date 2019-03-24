#pragma once
#include <memory>
#include <vector>
#include<iostream>


class BaseValidator
{
public:
	BaseValidator();

	virtual bool checking() = 0;
	virtual ~BaseValidator();

private:
};

