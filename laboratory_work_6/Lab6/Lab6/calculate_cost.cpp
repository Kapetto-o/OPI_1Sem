#include "calculate_cost.h"

using namespace std;

void calculateCost(int i) {
	cout << "Поездка до ";
	if (i == 0)
		cout << "дома только на автобусе? (1 - да, 2 - нет)" << endl;
	else
		cout << "цирка только на автобусе? (1 - да, 2 - нет)" << endl;
	cin >> variant;
	cout << endl;
	switch (variant)
	{
	case 1:
		cout << "Есть пересадки? (1 - да, 2 - нет)" << endl;
		cin >> variant; cout << endl;
		switch (variant)
		{
		case 1:
			cout << "Введите количество пересадок: ";
			cin >> transfer; cout << endl;
			cost = cost + bus_ticket * (transfer + 1);
			break;
		case 2:
			cost = cost + bus_ticket;
			break;
		}
		break;
	case 2:
		cout << "Поездка до ";
		if (i == 0)
			cout << "дома только на метро? (1 - да, 2 - нет)" << endl;
		else
			cout << "цирка только на метро? (1 - да, 2 - нет)" << endl;
		cin >> variant; cout << endl;
		switch (variant)
		{
		case 1:
			cost = cost + metro_ticket;
			break;
		case 2:
			cout << "Вывод: Поездка до ";
			if (i == 0)
				cout << "дома cразу на двух видах транспорта" << endl;
			else
				cout << "цирка cразу на двух видах транспорта" << endl;
			cout << endl;
			cout << "Введите количество автобусных пересадок: ";
			cin >> transfer; cout << endl;
			cost = cost + bus_ticket * (transfer + 1) + metro_ticket;
			break;
		}
		break;
	}
}
