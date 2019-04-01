#pragma once
#include <map>
class BaseNames
{
public:
	BaseNames();
    std::map <int, std::string> &getData() ;
	std::string getValue(int)const;
	virtual int getMinIndex() const=0;
	virtual int getMaxIndex() const=0;

protected:
	std::map <int, std::string> m_names;
	
};

