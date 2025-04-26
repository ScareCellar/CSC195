#pragma once
#include <iostream>
#include <vector>
#include "VehicleBaseClass.h"
#include "Car.h"
#include "Motorcycle.h"

class Database {
public:
	std::vector<Vehicle*> objects;
public:
	~Database(); // Destructor
	void Create(Vehicle::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(Vehicle::eType type);
};


