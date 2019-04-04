#include "DestinationNames.h"
using std::string;
using std::pair;

//======================================================================
//						ctor
//======================================================================
DestinationNames::DestinationNames()
{
	//(1 - Rome, 2 - Prague, 3 - New York, 4 - India, 5 - Thailand)"
	m_names.insert(std::pair<int, string>(1, "Rome"));
	m_names.insert(std::pair<int, string>(2, "Prague"));
	m_names.insert(std::pair<int, string>(3, "New York"));
	m_names.insert(std::pair<int, string>(4, "India"));
	m_names.insert(std::pair<int, string>(5, "Thailand"));
	
}




