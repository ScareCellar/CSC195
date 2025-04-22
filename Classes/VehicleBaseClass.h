#include <string>
#pragma once


class Vehicle
{
public:
	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	
	enum class eType
	{
		CAR,
		MOTORCYCLE
	};


	std::string GetName();
	
	virtual eType GetType() = 0;

protected:
	std::string name;
	int number_of_wheels;
};


