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
	return os;
}
std::ostream & operator<<(std::ostream & os,const ValuesToNames<ClassNames>& obj)
{
	std::map<int, std::string> cn = obj.getData().getData();
	auto it = cn.find(obj.m_key);
	if (it != cn.end()) {
		std::string i = it->second;
		os << i;
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
