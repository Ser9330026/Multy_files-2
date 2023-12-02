#include "Date.h"


void dateFunc(int time, int date)
{
	std::cout << "Введите текущую дату и время: ";
	std::cin >> time >> date;
	std::cout << time << ", " << date;
}

void defDateFunc(int date1, int date2)
{
	std::cout << "Введите две даты: ";
	std::cin >> date1 >> date2;
	std::cout << "Разница между датами: " << date1 - date2;
}
