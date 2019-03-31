#include "ClassNames.h"


using std::string;
using std::pair;
ClassNames::ClassNames()
{
	//1 - First Class, 2 - Business Class, 3 - Economy Class
	m_names.insert(std::pair<int,string>(1, "First Class"));
	m_names.insert(std::pair<int, string>(2, "Business Class"));
	m_names.insert(std::pair<int, string>(3, "Economy Class"));

}

int ClassNames::getMinIndex() const
{
	return 0;
}

int ClassNames::getMaxIndex() const
{
	return m_names.size();
}

