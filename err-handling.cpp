#include <iostream>

void err_handling() {
	
	int number;
	std::cout << "enter a even number greater than 32 but less than 64\n";
	std::cin >> number;

	try {
		if(std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			throw "A non integer value encountered";
		} else if (number <= 32) {
			throw number;
		} else if (number >= 64) {
			throw number;
		} else if (number % 2 != 0) {
			throw number;
		} else {
			std::cout << number << " is even and greater than 32 and also less than 64\n";
		}
	}
	catch(char *err) {
		std::cout << "An error occured" << err << "\n";
	}	
	catch(int number) {
		std::cout << "number is less than 32 / greater than 64 / odd \n";
	}

	std::cout << "end of program\n";

}

int main(void) {
	err_handling();
}
