#pragma once
#include <map>
class BaseNames
{
public:
	BaseNames();
    std::map <int, std::string> &getData() ;
    int& key();
	virtual int getMinIndex() const=0;
	virtual int getMaxIndex() const=0;
private:
	int m_key;
protected:
	std::map <int, std::string> m_names;
	
};

