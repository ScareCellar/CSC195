#pragma once
#include <string>

void f();

class Student
{
public:
	Student() {}
	Student(std::string name) {
		this->m_name = name;
	}

	void write();

	//std::string GetName() { return m_name; }
	//void SetName(std::)
private:
	std::string m_name;
};