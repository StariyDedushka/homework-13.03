#include <iostream>

int main() {
	int num1 = 200;
	int num2 = 17;
	int leastNumber = (num1 + num2) - num1 % num2
	;
	std::cout << "Result: " << leastNumber << std::endl;

return 0;	
}
