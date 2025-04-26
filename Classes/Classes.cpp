
#include <iostream>
#include <vector>
#include "VehicleBaseClass.h"

#include "Car.h"

#include "Motorcycle.h"

#include "Database.h"

using namespace std;



void Database::Create(Vehicle::eType type)
{
	Vehicle* obj = nullptr;
	switch (type)
	{
	case Vehicle::eType::CAR:
		obj = new Car;
		break;
	case Vehicle::eType::MOTORCYCLE:
		obj = new Motorcycle;
		break;
	}
	obj->Read(std::cout, std::cin);
	objects.push_back(obj);
}



void Database::Display(Vehicle::eType type)
{
	for (Vehicle* obj : objects)
	{
		if (obj->GetType() == type)
		{
			obj->Write(std::cout);
		}
	}
}

void Database::DisplayAll()
{
	for (int i = 0; i < Database::objects.size(); i++)
	{
		objects[i]->Write(std::cout);
	}
}

void Database :: Display(const std::string& name)
{
	for (int i = 0; i < Database::objects.size(); i++)
	{
		if (objects[i]->GetName() == name)
		{
			objects[i]->Write(std::cout);
		}
	}
}

Database::~Database()
{
	for (Vehicle* obj : objects)
	{
		delete obj;
	}
}





int main()
{
	
	Database database;

	bool quit = false;
	while (!quit)
	{
		std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
		int choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1: // Create object by type break;
			cout << "Enter type(0 for Car, 1 for Motorcycle) :" << endl;
			int t;
			cin >> t;
			database.Create(static_cast<Vehicle::eType>(t));
			break;
		case 2: // DisplayAll(); break; 
			database.DisplayAll();
			break;
		case 3: // Ask for name, then call database.Display(name) break; 
			cout << "Please enter a name: ";
			
			string name;
			cin >> name;
			
			database.Display(name);

			break;
		case 4:
		{
			std::cout << "Enter type (0 for Car, 1 for Motorcycle): ";
			int t;
			std::cin >> t;
			database.Display(static_cast<Vehicle::eType>(t)); break;
		}
		case 5:
			quit = true;
			break;
		}
	}
	return 0;
}