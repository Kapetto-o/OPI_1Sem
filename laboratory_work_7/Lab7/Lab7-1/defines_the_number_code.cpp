#include <iostream>
#include <windows.h>
#include <cctype>
#include <string>
using namespace std;

void definesTheNumberCode() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "russian");

	string number;

	cout << "������� �����(�� 0 �� 9) ";
	cin >> number;

	if (number >= "0" && number <= "9" && number.size() == 1)  // ���� ������� ��������� ����� �� 0 �� 9
	{

		cout << "\n��� �������� ����� " << int(number[0]) << endl << endl; // ������� ��� ���� ����� � ASCII

	}
	else
	{

		cout << "\n�� ����� �������� ��������!" << endl << endl;

	}
}