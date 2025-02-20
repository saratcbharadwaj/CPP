#include <iostream>
using namespace std;

int main() {

	float r, a;
	const float PI = 3.14f;
	cin >> r;
	a = PI * r * r;
	cout << endl << "Area of circle=" << a << endl;
	return 0;
}


// const is better than #define because it's scope of operation can be controlled by placing it appropriately either inside a function or outside all functions.
// if a const is placed inside a function it's effect will be localized to that function, whereas, if it is placed outside all functions, then it's effect will be global.
//
// #define doesn't support much flexibility as const does.
