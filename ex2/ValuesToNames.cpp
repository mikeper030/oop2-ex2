#include "ValuesToNames.h"
#include "DestinationNames.h"
#include "ClassNames.h"
#include <string>
#include <map>

std::ostream & operator<<(std::ostream & os,const ValuesToNames<DestinationNames>& obj)
{
	std::map<int,std::string> dn = obj.getData().getData();
	auto it = dn.find(obj.m_key);
	if (it != dn.end()) {
		std::string i = it->second;
		os << i;
	}
	else
	{
		os << obj.m_key;
	}
	return os;
}
std::ostream & operator<<(std::ostream & os,const ValuesToNames<ClassNames>& obj)
{
	std::map<int, std::string> cn = obj.getData().getData();
	auto it = cn.find(obj.m_key);
	if(it != cn.end()) {
		std::string i = it->second;
		os << i;
	}
    else
	{
	os << obj.m_key;
	}
	return os;
}

std::istream & operator>>(std::istream & is, ValuesToNames<DestinationNames>&  obj)
{
	is >> obj.m_key;

	return is;
}

std::istream & operator>>(std::istream & is, ValuesToNames<ClassNames>&  obj)
{
	is >> obj.m_key;

	return is;
}
std::ostream & operator<<(std::ostream & os, const ValuesToNames<CurrencyNames>& obj)
{
	std::map<int, std::string> cn = obj.getData().getData();
	auto it = cn.find(obj.m_key);
	if (it != cn.end()) {
		std::string i = it->second;
		os << i;
	}else
	{
		os << obj.m_key;
	}
	return os;
}
std::istream & operator>>(std::istream & is, ValuesToNames<CurrencyNames>&  obj)
{
	is >> obj.m_key;

	return is;
}


bool operator==(const ValuesToNames<DestinationNames>& o, const int & i)
{
	DestinationNames dn;
	return dn.getValue(o.m_key) == dn.getValue(i);
	
}
bool operator==(const ValuesToNames<CurrencyNames>&o, const int & i)
{
	CurrencyNames cn;
	return cn.getValue(o.m_key) == cn.getValue(i);
	
}
bool operator==(const ValuesToNames<ClassNames>&o, const int & i)
{
	ClassNames cln;
	return cln.getValue(o.m_key) == cln.getValue(i);
	
}
