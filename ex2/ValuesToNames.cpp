#include "ValuesToNames.h"
#include "DestinationNames.h"
#include "ClassNames.h"
#include <string>
#include <map>

std::ostream & operator<<(std::ostream & os,const ValuesToNames<DestinationNames>& obj)
{
	std::map<int,std::string> dn = obj.getData().getData();
	//os << dn.at(obj.m_key);
	return os;
}
std::ostream & operator<<(std::ostream & os,const ValuesToNames<ClassNames>& obj)
{
	std::map<int, std::string> cn = obj.getData().getData();
	//os << cn.at(obj.m_key);
	return os;
}

std::istream & operator>>(std::istream & is, ValuesToNames<DestinationNames>  obj)
{
	is >> obj.m_key;

	return is;
}

std::istream & operator>>(std::istream & is, ValuesToNames<ClassNames>  obj)
{
	is >> obj.m_key;

	return is;
}
