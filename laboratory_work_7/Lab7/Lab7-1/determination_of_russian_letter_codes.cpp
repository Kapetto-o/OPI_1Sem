#include <iostream>
#include <windows.h>
#include <cctype>
using namespace std;

void definesOfRussianLetterCodes() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char symbol; // ��������� ������ ��������

	cout << "������� ������: ";
	cin >> symbol;

	if (symbol >= '�' && symbol <= '�') // ���� ������ � ������� �������� ���������
	{

		symbol += 32; // ��������� ��� � ������ �������
		cout << endl << symbol << endl; // ������� ������ ����� ��������� ��������
		cout << "������� ����� ����������= " << int('a' - 'A') << endl << endl; // ������� ������� ����� ����������

	}
	else if (symbol >= '�' && symbol <= '�') // ���� ������ � ������ �������� ���������
	{

		symbol -= 32; // ��������� ��� � ������� �������
		cout << endl << symbol << endl; // ������� ������ ����� ��������� ��������
		cout << "������� ����� ����������= " << int('a' - 'A') << endl << endl; // ������� ������� ����� ����������

	}
	else if (symbol == '�') // ���� ������ "�"
	{

		symbol -= 16; // ��������� ��� � ������ "�"
		cout << endl << symbol << endl; // ������� ������ ����� ��������� ��������
		cout << "������� ����� ����������= " << int('�' - '�') << endl << endl; // ������� ������� ����� ����������

	}
	else if (symbol == '�') // ���� ������ "�"
	{

		symbol += 16; // ��������� ��� � ������ "�"
		cout << endl << symbol << endl; // ������� ������ ����� ��������� ��������
		cout << "������� ����� ����������= " << int('�' - '�') << endl << endl; // ������� ������� ����� ����������

	}
	else
	{

		cout << "\n�� ����� �������� ��������!" << endl << endl;

	}
}