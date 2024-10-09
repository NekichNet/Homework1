#include <iostream>
#include <Windows.h>
#include <cstdlib>

void FillList(int list, int size) {
	for (int i = 0; i < size; i++) {
		list[i] = rand() % 27 - 8;
	}
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
		if (list[i] < min) { min = i; }
		if (list[i] > max) { max = i; }
	}
	std::cout <<
		"Min element ¹" << min + 1 << ": " << list[min] <<
		"\nMax element ¹" << max + 1 << ": " << list[max] << '\n';
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