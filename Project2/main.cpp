#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int arrlenght = 10;
	int rand_arr[arrlenght];
	int user_arr[arrlenght];
	int answer;
	int rand_num;

	for (int i = 0; i < 10; i++) {
		rand_num = rand() % 11;
		rand_arr[i] = rand_num;
		cout << "������� ����� �� 0 �� 10: ";
		cin >> answer;
		user_arr[i] = answer;
		if (answer < 0 || answer > 10)
		{
			cout << "�� ������� ����� �����������! \n";
			i--;
			continue;
		}
		if (answer == rand_num)
		{
			cout << "����������� ���� ����� �� �����! :)  \n";
		}

	}

	return 0;
}