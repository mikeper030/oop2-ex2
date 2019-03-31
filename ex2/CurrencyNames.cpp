#include "CurrencyNames.h"

using std::string;
using std::pair;

CurrencyNames::CurrencyNames()
{
	//1 - NIS, 2 - Euro, 3 - Dollar
	m_names.insert(std::pair<int, string>(1, "NIS"));
	m_names.insert(std::pair<int, string>(2, "Euro"));
	m_names.insert(std::pair<int, string>(3, "Dollar"));
}



