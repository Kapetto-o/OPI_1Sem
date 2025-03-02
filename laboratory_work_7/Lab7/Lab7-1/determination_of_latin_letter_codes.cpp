#include <iostream>
#include <windows.h>
#include <cctype>
using namespace std;

void definesOfLatinLetterCodes() {

	char symbol; // Объявляем массив символов

	cout << "Введите символ: ";
	cin >> symbol;
	
	if (symbol >= 'A' && symbol <= 'Z') // Если символ в верхнем регистре
	{

		symbol += 32; // переводим его в нижний регистр
		cout << endl << symbol << endl; // Выводим символ после изменения регистра
		cout << "Разница между регистрами= " << int('a' - 'A') << endl << endl; // Выводим разницу между регистрами

	}
	else if (symbol >= 'a' && symbol <= 'z') // Если символ в нижнем регистре
	{
		
		symbol -= 32; // переводим его в верхний регистр
		cout << endl << symbol << endl; // Выводим символ после изменения регистра
		cout << "Разница между регистрами= " << int('a' - 'A') << endl << endl; // Выводим разницу между регистрами

	}
	else
	{

		cout << "\nВы ввели неверное значение!" << endl << endl;

	}
}