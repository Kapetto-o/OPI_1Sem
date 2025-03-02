#include <locale.h>
#include "input_ticket_costs.h"
#include "calculate_cost.h"
#include "print_cost.h"

float cost = 0, bus_ticket, metro_ticket;
int transfer, variant;

void main()
{
	setlocale(LC_CTYPE, "Russian");

	inputTicketCosts();

	for (int i = 0; i < 2; i++) {
		calculateCost(i);
	}

	printCost();
}