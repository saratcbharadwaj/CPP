#include <iostream>

using namespace std;
void change(const int &);

int main() {

	int i = 32;
	change(i);
	cout << endl << i;
	return 0;
}

void change ( const int &j) {
	j = 45;
}


