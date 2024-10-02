#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int m[20];
	
	for (int i = 0; i < 20; i++) {
		m[i] = std::rand() % 17 - 5;
		std::cout << m[i] << ' ';
		if (i == 9) {
			std::cout << '\n';
		}
	}

	return 0;
}