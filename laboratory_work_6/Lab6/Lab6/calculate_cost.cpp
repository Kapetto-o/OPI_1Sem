#include "calculate_cost.h"

using namespace std;

void calculateCost(int i) {
	cout << "������� �� ";
	if (i == 0)
		cout << "���� ������ �� ��������? (1 - ��, 2 - ���)" << endl;
	else
		cout << "����� ������ �� ��������? (1 - ��, 2 - ���)" << endl;
	cin >> variant;
	cout << endl;
	switch (variant)
	{
	case 1:
		cout << "���� ���������? (1 - ��, 2 - ���)" << endl;
		cin >> variant; cout << endl;
		switch (variant)
		{
		case 1:
			cout << "������� ���������� ���������: ";
			cin >> transfer; cout << endl;
			cost = cost + bus_ticket * (transfer + 1);
			break;
		case 2:
			cost = cost + bus_ticket;
			break;
		}
		break;
	case 2:
		cout << "������� �� ";
		if (i == 0)
			cout << "���� ������ �� �����? (1 - ��, 2 - ���)" << endl;
		else
			cout << "����� ������ �� �����? (1 - ��, 2 - ���)" << endl;
		cin >> variant; cout << endl;
		switch (variant)
		{
		case 1:
			cost = cost + metro_ticket;
			break;
		case 2:
			cout << "�����: ������� �� ";
			if (i == 0)
				cout << "���� c���� �� ���� ����� ����������" << endl;
			else
				cout << "����� c���� �� ���� ����� ����������" << endl;
			cout << endl;
			cout << "������� ���������� ���������� ���������: ";
			cin >> transfer; cout << endl;
			cost = cost + bus_ticket * (transfer + 1) + metro_ticket;
			break;
		}
		break;
	}
}
