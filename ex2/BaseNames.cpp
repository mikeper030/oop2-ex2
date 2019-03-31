#include "BaseNames.h"


BaseNames::BaseNames()
{
}

std::map<int, std::string>& BaseNames::getData() 
{
	return m_names;
}
//no const ->used for input
int & BaseNames::key()
{
	return m_key;
}



