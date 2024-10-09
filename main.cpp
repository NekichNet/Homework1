#include <iostream>
#include <Windows.h>
#include <cstdlib>

int FillList(int list[], int size) {
	for (int i = 0; i < size; i++) {
		list[i] = rand() % 27 - 8;
	}
	return list[size];
}

void PrintList(int list[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << list[i] << ' ';
	}
	std::cout << '\n';
}

void PrintMinMax(int list[], int size) {
	int min = 0, max = 0;
	for (int i = 0; i < size; i++) {
		if (list[i] < min) { min = list[i]; }
		if (list[i] > max) { max = list[i]; }
	}
	std::cout <<
		"Min element: " << min <<
		"\nMax element: " << max << '\n';
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	unsigned const int size = 20;
	int list[size];

	FillList(list, size);
	PrintList(list, size);
	PrintMinMax(list, size);

	return 0;
}