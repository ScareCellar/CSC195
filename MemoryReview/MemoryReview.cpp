

#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

void Square(int& i)
{
	i = i * i;
}

void Double(int* i)
{
	*i = *i * 2;
}
int main()
{
	// ** REFERENCE **
	//
	int int1 = 6; // declare an int variable and set the value to some number (less than 10)
	int& r = int1; // declare a int reference and set it to the int variable above
	cout << int1 << endl; // output the int variable
	r = 23; // set the int reference to some number
	cout << int1 << endl; // output the int variable
		// what happened to the int variable when the reference was changed? (the int variable changed to match the reference)
	cout << &int1 << endl; // output the address of the int variable
	cout << &r << endl; // output the address of the int reference
		// are the addresses the same or different? (The adresses are the same)
	// ** REFERENCE PARAMETER **
	//
		// create a function above main() called Square that takes in an int parameter
		// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	Square(r); // call the Square function with the int variable created in the REFERENCE section
	cout << int1 << endl; // output the int variable to the console
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
		// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
	// ** POINTER VARIABLE **
	//
	int* myPointer = nullptr; // declare an int pointer, set it to nullptr (it points to nothing)
	myPointer = &int1; // set the int pointer to the address of the int variable created in the REFERENCE section
	cout << myPointer << endl; // output the value of the pointer
	// what is this address that the pointer is pointing to? (00000006C99BF654)
	cout << *myPointer << endl; // output the value of the object the pointer is pointing to (dereference the pointer)
	// ** POINTER PARAMETER **
	//
		// create a function above main() called Double that takes in an int pointer parameter
		// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
		// !! make sure to dereference the pointer to set the value and not set the address !!
	Double(myPointer); // call the Double function with the pointer created in the POINTER VARIABLE section
	cout << *myPointer << endl; // output the dereference pointer
	cout << int1 << endl; // output the int variable created in the REFERENCE section
	// did the int variable's value change when using the pointer? yes, the variables value did change when using the pointer.
}
