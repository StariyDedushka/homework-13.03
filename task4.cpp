#include <iostream>
#define MIN(a,b) if(a < b) std::cout << "A is less than B\n"; \
else std::cout << "A is greater than B\n"

int main() {
	int a = 5;
	int b = 2;
	MIN(a, b);
	a = 3;
	b = 8;
	MIN(a, b);
	return 0;
}
