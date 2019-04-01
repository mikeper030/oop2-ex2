#pragma once
#include <map>
class BaseNames
{
public:
	BaseNames();
    std::map <int, std::string> &getData() ;
	std::string getValue(int)const;
	virtual int getMinIndex() const;
	virtual int getMaxIndex() const;

protected:
	std::map <int, std::string> m_names;
	
};

