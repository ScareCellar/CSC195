#pragma once
# include <iostream>
#include "VehicleBaseClass.h"

class Car : public Vehicle{
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override { return eType::CAR; }

protected:
	int number_of_seats;
};
void Car::Read(std::ostream& ostream, std::istream& istream)
{
	Vehicle::Read(ostream, istream); 
	ostream << "Enter Number of Wheels: ";
	istream >> number_of_wheels;
}

void Car::Write(std::ostream& ostream)
{
	Vehicle::Write(ostream); 
	ostream << "Number of Wheels: " << number_of_wheels << std::endl;
}