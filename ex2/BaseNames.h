#pragma once
#include <map>


//==================================================================//
//							BaseNames
//==================================================================//
class BaseNames
{
//========================   public   ================================
public:
	//ctor
	BaseNames();

	//this function return data structurs of map 
    std::map <int, std::string> &getData() ;

	//return value by she get a key
	std::string getValue(int)const;

	//get index
	virtual int getMinIndex() const;
	virtual int getMaxIndex() const;

//=======================   protected   =============================
protected:
	std::map <int, std::string> m_names;
	
};

