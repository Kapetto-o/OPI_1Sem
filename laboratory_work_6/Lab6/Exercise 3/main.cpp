#include <iostream>
#include <locale.h>
#include <Windows.h>
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	wchar_t lowercase, uppercase, symbol;
	int variant, exit_number;
	for (;;) {
		cout << "Введите номер варианта использования: "; cin >> variant;
		switch (variant)
		{
		case 1:
			cout << "Введите заглавную латинскую букву: \n"; wcin >> uppercase;
			cout << "Введите строчную латинскую букву: \n"; wcin >> lowercase;
			if (64 < uppercase && uppercase < 91 && 96 < lowercase && lowercase < 123)
				cout << "Разница значений кодов: " << lowercase - uppercase << endl;
			else
				cout << "Ошибка. Введена не латинская буква" << endl;
			break;
		case 2:
			wcout << L"Введите заглавную русскую букву: \n"; wcin >> uppercase;
			wcout << L"Введите строчную русскую букву: \n"; wcin >> lowercase;
			if ((1039 < uppercase) && (uppercase < 1072) && (1071 < lowercase) && (lowercase < 1104))
				wcout << L"Разница значений кодов: " << int(lowercase - uppercase) << endl;
			else
				wcout << L"Ошибка. Введена не русская буква" << endl;
			break;
		case 3:
			wcout << L"Введите любой символ: "; wcin >> symbol;
			wcout << L"Код введённого вами символа: " << int(symbol) << endl;
			break;
		case 4:
			wcout << L"До свидания!" << endl;
			break;
		default:
			wcout << L"Нет такого варианта!!!" << endl;
			break;
		}
		cout << "Если хотите выйти, нажмите 0, если хотите продолжить нажмите 1: "; cin >> exit_number;
		if (exit_number == 0) {
			break;
		}
		if (exit_number == 1) {
			continue;
		}
	}
}