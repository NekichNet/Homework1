#include <iostream>
#include <Windows.h>
#include <cstdlib>

unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	unsigned const int size = 10;
	int random_m[size], user_m[size], overlaps = 0;
	double chance;
	char retry;
	
	do {
		for (int i = 0; i < size; i++) {
			random_m[i] = rand() % 11;
			do {
				std::cout << size - i << " numbers left. Enter a number in range [0; 10]: ";
				std::cin >> user_m[i];
			} while (user_m[i] < 0 || user_m[i] > 10);
		}
		for (int i = 0; i < size; i++) {
			if (random_m[i] == user_m[i]) {
				std::cout << "\nOverlap on index " << i << ": " << random_m[i];
				overlaps++;
			}
		}
		chance = 3628800 / factorial(10 - overlaps) * std::pow(0.1, overlaps) * std::pow(0.9, 10 - overlaps);
		std::cout << "\nChance of " << overlaps << " numbers overlaping: " << chance
			<< "\nWanna retry? (y/n) ";
		std::cin >> retry;
	} while (retry == 'y' || retry == 'Y');

	return 0;
}