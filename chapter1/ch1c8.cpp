#include <iostream>
using namespace std;

struct emp {

	char name[20];
	int age;
	float sal;
};

emp e1 = {"Amol", 21, 2345.00 };
emp e2 = {"Ajay", 23, 4500.75};

emp &fun();

int main() {

	fun() = e2;
	cout << e1.name << endl << e1.age << endl << e1.sal << endl;
	return 0;
}

emp &fun() {

	cout << e1.name << endl << e1.age << endl << e1.sal << endl;
	return e1;
}
// A function can also be called by it's reference in cpp.
// fun() returns e1 by reference. to this reference e2 gets assigned. 
// As the reference gets automatically dereferenced, e2 gets assigned to e1.
// cout statement verifies that the assignment has indeed taken place.


// Remember not to return a local variable by reference. 
