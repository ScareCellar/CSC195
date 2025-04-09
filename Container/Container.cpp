
#include <iostream>
#include <Array>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
	//array
	int arr[5] = { 1,2,3,4,5 };

	cout << arr[1] << endl; //should rpint out the value '2'

	//vector
	vector<int> intVector = { 1,2,3,4,5 };

	intVector.pop_back();
	intVector.push_back(6);

	cout << intVector[4] << endl; //prints out the value of 6

	//list
	list<int> myList = { 1,2,3,4,5 };

	myList.push_front(0);

	myList.push_back(6);

	for (int x : myList)
	{
		cout << x << " " << endl;
	}

	//map
	map<string, int> ages;

	ages["Xadia"] = 17;
	ages["Cameron"] = 18;
	ages["Alex"] = 19;

	cout << ages["Cameron"] << endl;

	cout << ages["Alex"] << endl;
}