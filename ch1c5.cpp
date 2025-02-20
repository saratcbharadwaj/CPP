#include <iostream>
using namespace std;

int main() {

	int i = 10; int &j = i;

	std::cout << "i=" << i<< " " << "j= " << j << endl;
	j = 20;
	
	std::cout << "i=" << i<< " " << "j=" << j << endl;
	i = 30;

	std::cout << "i=" << i<< " " << "j=" << j << endl;
	j++;

	std::cout << "i=" << i << " " << "j=" << j << endl;

	i++;
	std::cout << "i=" << i << " " << "j=" << j << endl;

	std::cout << "address of i=" << &i << endl << "address of j=" << &j << endl;
	return 0;
}

