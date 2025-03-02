#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");

	float cost = 0, bus_ticket, metro_ticket;
	int transfer, variant1;
	cout << "Введите стоимость билета на автобус: "; cin >> bus_ticket;
	cout << "Введите стоимость билета на метро: "; cin >> metro_ticket;
	for (int i = 0; i < 2; i++) {
		cout << "Поездка до ";
		if (i == 0)
			cout << "дома только на автобусе? (1 - да, 2 - нет)" << endl;
		else
			cout << "цирка только на автобусе? (1 - да, 2 - нет)" << endl;
		cin >> variant1; cout << endl;
		switch (variant1)
		{
		case 1:
			cout << "Есть пересадки? (1 - да, 2 - нет)" << endl; cin >> variant1; cout << endl;
			switch (variant1)
			{
			case 1:
				cout << "Введите количество пересадок: "; cin >> transfer; cout << endl;
				cost = cost + bus_ticket* (transfer + 1);
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
			cin >> variant1; cout << endl;
			switch (variant1)
			{
			case 1:
				cost = cost + metro_ticket;
				break;
			case 2:
				cout << "Вывод: Поездка до ";
				if (i == 0)
					cout << "дома разу на двух видах транспорта" << endl;
				else
					cout << "цирка cразу на двух видах транспорта" << endl;
				cout << endl;
				cout << "Введите количество автобусных пересадок: "; cin >> transfer; cout << endl;
				cost = cost + bus_ticket * (transfer + 1) + metro_ticket;
				break;
			}
		}
	}
	cout << "Стоимость поездки по городу: " << cost; cout << endl;
}
