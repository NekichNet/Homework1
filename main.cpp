#include <iostream>
#include <Windows.h>
#include <cstdlib>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	unsigned const int size = 10;
	int random_m[size], user_m[size];
	
	for (int i = 0; i < size; i++) {
		random_m[i] = rand() % 11;
		do {
			std::cout << size - i << " numbers left. Enter a number in range [0; 10]: ";
			std::cin >> user_m[i];
		} while (user_m[i] < 0 || user_m[i] > 10);
	}
	for (int i = 0; i < size; i++) {
		if (random_m[i] == user_m[i]) {
			std::cout << "Overlap on index " << i << ": " << random_m[i];
		}
	}

	return 0;
}