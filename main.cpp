#include <iostream>
#include <Windows.h>
#include <vector>

void first_task() {
	unsigned int num;
	std::cout << "Please, enter 6-digit number: ";
	std::cin >> num;
	if (num < 100000 || num > 999999) { std::cout << "Dude? It isn't 6-digit\n"; }
	else {
		unsigned int a, b, c, d, e, f;
		a = num / 100000;
		b = num / 10000 - a * 10;
		c = num / 1000 - a * 100 - b * 10;
		d = num / 100 - a * 1000 - b * 100 - c * 10;
		e = num / 10 - a * 10000 - b * 1000 - c * 100 - d * 10;
		f = num - a * 100000 - b * 1000 - c * 1000 - d * 100 - e * 10;
		if (a + b + c == d + e + f) {
			std::cout << "Your number is lucky\n";
		}
		else {
			std::cout << "Your number isn't lucky\n";
		}
	}
}

void second_task() {
	unsigned int num;
	std::cout << "Please, enter 4-digit number: ";
	std::cin >> num;
	if (num < 1000 || num > 9999) { std::cout << "Dude? It isn't 4-digit\n"; }
	else {
		unsigned int a, b, c, d;
		a = num / 1000;
		b = num / 100 - a * 10;
		c = num / 10 - a * 100 - b * 10;
		d = num - a * 1000 - b * 100 - c * 10;
		std::cout << "Shuffled number is " << a * 100 + b * 1000 + c + d * 10 << '\n';
	}
}

void third_task() {
	std::vector<int> list;
	for (int i = 0; i < 7; i++) {
		int num;
		std::cout << '(' << 7 - i << " left) Write in number: ";
		std::cin >> num;
		list.push_back(num);
	}
	std::cout << "Max number is " << *std::max_element(list.begin(), list.end());
}

int main() {
	first_task();
	second_task();
	third_task();
	return 0;
}