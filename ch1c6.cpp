#include <iostream>
using namespace std;

int main() {

	int i=10; int &j = i;

	cout << "i=" << i << "j=" << j<<endl;
	i = 20;
	cout <<"i=" << i << "j=" << j << endl;
	i = 30;
	cout <<"i=" <<i  << "j=" << j << endl;
	i++;
	cout <<"i=" << i << "j=" << j << endl;
	i++;
	cout <<"i=" << i << "j=" << j << endl;
	j++;
	cout << "i=" << i << "j=" << j << endl;

	cout << "address of i=" << &i << "address of j=" << &j << endl;
	return 0;
}


// In the above program, j is called as reference of i.
// references are denoted by '&denoter' variable.
// A reference contains address of the variable that it refers to.
// '*' operator is no longer need for reference.
// declaring a refence without assigning any variable to it causes an error.
//
// If there are m variables refering to the same address, then, a change in one variable affects every other.
// An array of pointers can be accepted, but not an array of references
