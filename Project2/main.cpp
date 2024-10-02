#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int arrlenght = 20;
	int arr[arrlenght];

	for (int i = 0; i < 20; i++) {

		arr[i] = rand() % 16 - 5;
		cout << arr[i] << ' ';
		cout << endl;
		if (i == 9)
		{
			cout << endl;
		}
	}

	return 0;
}