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

	cout << "Введите цифру(от 0 до 9) ";
	cin >> number;

	if (number >= "0" && number <= "9" && number.size() == 1)  // Если введена одиночная цифра от 0 до 9
	{

		cout << "\nКод заданной цифры " << int(number[0]) << endl << endl; // Выводим код этой цифры в ASCII

	}
	else
	{

		cout << "\nВы ввели неверное значение!" << endl << endl;

	}
}