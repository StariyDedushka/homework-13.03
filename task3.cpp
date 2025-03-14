#include <iostream>

int main() {
	int triHeight = 1;
	int triWidth = 1;
	int k = 0;
	std::cout << "Enter the triangle's height: ";
	std::cin >> triHeight;
	for(int i = 0; i < triHeight; i++) {
		triWidth += 2;
	}
	
	for(int i = 0; i < triHeight; i++) {
		if(i == 0) k = i;
		else
		k += 2;
		for(int n = (triWidth - k) / 2; n > 0; n--)
		std::cout << " ";
		for(int m = 0; m <= k; m++) {
			std::cout << "^";
		}
		std::cout << "\n";
	}
}
