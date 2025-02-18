#include <iostream>

struct employee {

	char name[20];
	union {
		
		int emptype;
		char grade[4];
	};
    };

int main() {

	struct employee e;
	e.emptype = 3;
	return 0;
}
