#include <iostream>
#include <windows.h>
#include <cctype>
using namespace std;

void definesOfLatinLetterCodes() {

	char symbol; // ��������� ������ ��������

	cout << "������� ������: ";
	cin >> symbol;
	
	if (symbol >= 'A' && symbol <= 'Z') // ���� ������ � ������� ��������
	{

		symbol += 32; // ��������� ��� � ������ �������
		cout << endl << symbol << endl; // ������� ������ ����� ��������� ��������
		cout << "������� ����� ����������= " << int('a' - 'A') << endl << endl; // ������� ������� ����� ����������

	}
	else if (symbol >= 'a' && symbol <= 'z') // ���� ������ � ������ ��������
	{
		
		symbol -= 32; // ��������� ��� � ������� �������
		cout << endl << symbol << endl; // ������� ������ ����� ��������� ��������
		cout << "������� ����� ����������= " << int('a' - 'A') << endl << endl; // ������� ������� ����� ����������

	}
	else
	{

		cout << "\n�� ����� �������� ��������!" << endl << endl;

	}
}