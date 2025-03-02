#include <iostream>
#include <windows.h>
#include <cctype>
#include "task.h"
using namespace std;

void main()
{
	SetConsoleCP(1251); // Устанавливаем кодовую страницу ввода для консоли
	SetConsoleOutputCP(1251); // Устанавливаем кодовую страницу вывода для консоли
	setlocale(LC_CTYPE, "Russian"); // Устанавливаем локаль для поддержки русского языка

	int choose; // Объявляем переменную для выбора пользователя

	do {
		cout << "Что хотите сделать (1, 2, 3 или 4)" << endl;
		cout << "1 - символ латинского алфавита" << endl;
		cout << "2 - символ русского алфавита" << endl;
		cout << "3 - кода символа, соответствующего введенной цифре" << endl;
		cout << "4 - выход из программы " << endl;
		cin >> choose;
		
		switch (choose) {
		
		case 1: definesOfLatinLetterCodes(); break; // Если выбрано 1, вызываем функцию "definesOfLatinLetterCodes"
		case 2: definesOfRussianLetterCodes(); break; // Если выбрано 2, вызываем функцию "definesOfRussianLetterCodes"
		case 3: definesTheNumberCode(); break; // Если выбрано 3, вызываем функцию "outputDigitCode"
		case 4: break; // Если выбрано 4, приостанавливаем выполнение программы
		default: cout << "Введено неверное значение!"; // В случае некорректного ввода выводим сообщение

		}
	} while (choose != 4);
}