#include <iostream>
#include <locale.h>
#include <Windows.h>
using namespace std;
void main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	wchar_t lower_case, upper_case, symbol;
	int variant, exit_number;
	for (;;) {
		cout << "Введите номер варианта использования: "; cin >> variant;
		switch (variant)
		{
		case 1:
			cout << "Введите заглавную латинскую букву: \n"; wcin >> upper_case;
			cout << "Введите строчную латинскую букву: \n"; wcin >> lower_case;
			if (64 < upper_case && upper_case < 91 && 96 < lower_case && lower_case < 123)
				cout << "Разница значений кодов: " << lower_case - upper_case << endl;
			else
				cout << "Ошибка. Введена не латинская буква" << endl;
			break;
		case 2:
			wcout << L"Введите заглавную русскую букву: \n"; wcin >> upper_case;
			wcout << L"Введите строчную русскую букву: \n"; wcin >> lower_case;
			if ((1039 < upper_case) && (upper_case < 1072) && (1071 < lower_case) && (lower_case < 1104))
			wcout << L"Разница значений кодов: " << int(lower_case - upper_case) << endl;
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