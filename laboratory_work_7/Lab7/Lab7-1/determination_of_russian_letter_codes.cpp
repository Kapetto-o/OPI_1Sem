#include <iostream>
#include <windows.h>
#include <cctype>
using namespace std;

void definesOfRussianLetterCodes() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char symbol; // Объявляем массив символов

	cout << "Введите символ: ";
	cin >> symbol;

	if (symbol >= 'А' && symbol <= 'Я') // Если символ в верхнем регистре кириллицы
	{

		symbol += 32; // переводим его в нижний регистр
		cout << endl << symbol << endl; // Выводим символ после изменения регистра
		cout << "Разница между регистрами= " << int('a' - 'A') << endl << endl; // Выводим разницу между регистрами

	}
	else if (symbol >= 'а' && symbol <= 'я') // Если символ в нижнем регистре кириллицы
	{

		symbol -= 32; // переводим его в верхний регистр
		cout << endl << symbol << endl; // Выводим символ после изменения регистра
		cout << "Разница между регистрами= " << int('a' - 'A') << endl << endl; // Выводим разницу между регистрами

	}
	else if (symbol == 'ё') // Если символ "ё"
	{

		symbol -= 16; // переводим его в символ "ё"
		cout << endl << symbol << endl; // Выводим символ после изменения регистра
		cout << "Разница между регистрами= " << int('Ё' - 'ё') << endl << endl; // Выводим разницу между регистрами

	}
	else if (symbol == 'Ё') // Если символ "Ё"
	{

		symbol += 16; // переводим его в символ "Ё"
		cout << endl << symbol << endl; // Выводим символ после изменения регистра
		cout << "Разница между регистрами= " << int('Ё' - 'ё') << endl << endl; // Выводим разницу между регистрами

	}
	else
	{

		cout << "\nВы ввели неверное значение!" << endl << endl;

	}
}