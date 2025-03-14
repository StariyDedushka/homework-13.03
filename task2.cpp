#include <iostream>

int main() {
	int factorial = 362880;
	int i = 0;
	while(factorial != 1) {
		i++;
		factorial /= i;
	}
	std::cout << "The initial number was " << i << std::endl;
	return 0;
}
