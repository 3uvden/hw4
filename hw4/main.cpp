#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float dollar = 92.86;
	float euro = 103.41;
	float yuan = 13.22;
	float Farit = 37;
	float yen = 0.646223;
	int currency = 0;
	float rubles = 0;
	char answer;
	float exchangeRate = 0.0;
	std::string currencyName;


	std::cout << "����� �����:\n";
	std::cout << "----------------------\n";
	std::cout << "| 1 ������ - 92,86�  |\n";
	std::cout << "| 1 ���� - 103,41�   |\n";
	std::cout << "| 1 ���� - 13,22�    |\n";
	std::cout << "| 1 ����� - 37�      |\n";
	std::cout << "| 1 ��� - 0,646223�  |\n";
	std::cout << "|--------------------|\n";
	std::cout << "| �������� - 5%      |\n";
	std::cout << "----------------------\n";
	std::cout << "1.������\n";
	std::cout << "2.����\n";
	std::cout << "3.����\n";
	std::cout << "4.�����\n";
	std::cout << "5.���\n";
	std::cout << "�������� ������: ";
	std::cin >> currency;
	if (currency < 1 || currency > 6)
	{
		std::cout << "������! ������� ����� �� 1 �� 5\n";
		return 1;
	}
	else
	{
		std::cout << "������� ���-�� ������: ";
		std::cin >> rubles;
	}
	std::cout << "�� ����������� �������� " << rubles << " ������?[y/n]";
	std::cin >> answer;
	if (answer == 'y' || answer == 'Y') {
		float exchangeRate = 0;
		std::string currencyName;

		if (currency == 1) {
			exchangeRate = dollar;
			currencyName = "��������";
		}
		else if (currency == 2) {
			exchangeRate = euro;
			currencyName = "����";
		}
		else if (currency == 3) {
			exchangeRate = yuan;
			currencyName = "�����";
		}
		else if (currency == 4) {
			exchangeRate = Farit;
			currencyName = "�������";
		}
		else if (currency == 5) {
			exchangeRate = yen;
			currencyName = "���";
		}

		float amountAfterCommission = rubles * (1 - 0.05);
		float exchangedAmount = amountAfterCommission / exchangeRate;

		std::cout << "�� �������� " << rubles << " ������ �� " << exchangedAmount << " " << currencyName << ".\n";
	}
	else {
		std::cout << "����� ������.\n";
	}

	return 0;
}