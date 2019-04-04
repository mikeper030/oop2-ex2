#include "BaseNames.h"

//===================================================
//				ctor
//===================================================
BaseNames::BaseNames()
{
}
//===================================================
//   this function return data structurs of map 
//===================================================
std::map<int, std::string>& BaseNames::getData() 
{
	return m_names;
}
//===================================================
//		   return value by she get a key
//===================================================
std::string BaseNames::getValue(int key) const
{
	std::string val = "";
	auto it = m_names.find(key);
	if (it != m_names.end()) 
	val = it->second;
		
	return val;
}
//===================================================
//  get index
//===================================================
int BaseNames::getMinIndex() const
{
	return 1;
}
//===================================================
//   get index
//===================================================
int BaseNames::getMaxIndex() const
{
	return m_names.size();
}




