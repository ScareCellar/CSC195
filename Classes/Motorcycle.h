#pragma once
# include <iostream>
#include "VehicleBaseClass.h"

class Motorcycle : public Vehicle {
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override { return eType::MOTORCYCLE; }


};
void Motorcycle::Read(std::ostream& ostream, std::istream& istream)
{
	Vehicle::Read(ostream, istream);
	ostream << "Enter Number of Wheels: ";
	istream >> number_of_wheels;
	Vehicle::Read(ostream, istream);
	ostream << "Enter Name: ";
	istream >> name;
}

void Motorcycle::Write(std::ostream& ostream)
{
	Vehicle::Write(ostream);
	ostream << "Number of Wheels: " << number_of_wheels << std::endl;
	Vehicle::Write(ostream);
	ostream << "Name: " << name << std::endl;
}
