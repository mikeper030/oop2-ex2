#include "BaseNames.h"


BaseNames::BaseNames()
{
}

std::map<int, std::string>& BaseNames::getData() 
{
	return m_names;
}

std::string BaseNames::getValue(int key) const
{
	std::string val = "";
	auto it = m_names.find(key);
	if (it != m_names.end()) 
	val = it->second;
		
	return val;
}




