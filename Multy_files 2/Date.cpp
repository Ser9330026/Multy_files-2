#include "Date.h"


void dateFunc(int time, int date)
{
	std::cout << "������� ������� ���� � �����: ";
	std::cin >> time >> date;
	std::cout << time << ", " << date;
}

void defDateFunc(int date1, int date2)
{
	std::cout << "������� ��� ����: ";
	std::cin >> date1 >> date2;
	std::cout << "������� ����� ������: " << date1 - date2;
}
