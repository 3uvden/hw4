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


	std::cout << "Курсы валют:\n";
	std::cout << "----------------------\n";
	std::cout << "| 1 Доллар - 92,86р  |\n";
	std::cout << "| 1 Евро - 103,41р   |\n";
	std::cout << "| 1 Юань - 13,22р    |\n";
	std::cout << "| 1 Фарит - 37р      |\n";
	std::cout << "| 1 Йен - 0,646223р  |\n";
	std::cout << "|--------------------|\n";
	std::cout << "| комиссия - 5%      |\n";
	std::cout << "----------------------\n";
	std::cout << "1.Доллар\n";
	std::cout << "2.Евро\n";
	std::cout << "3.Юань\n";
	std::cout << "4.Фарит\n";
	std::cout << "5.Йен\n";
	std::cout << "Выберите валюту: ";
	std::cin >> currency;
	if (currency < 1 || currency > 6)
	{
		std::cout << "Ошибка! Введите число от 1 до 5\n";
		return 1;
	}
	else
	{
		std::cout << "Введите кол-во рублей: ";
		std::cin >> rubles;
	}
	std::cout << "Вы собираетесь обменять " << rubles << " рублей?[y/n]";
	std::cin >> answer;
	if (answer == 'y' || answer == 'Y') {
		float exchangeRate = 0;
		std::string currencyName;

		if (currency == 1) {
			exchangeRate = dollar;
			currencyName = "долларов";
		}
		else if (currency == 2) {
			exchangeRate = euro;
			currencyName = "евро";
		}
		else if (currency == 3) {
			exchangeRate = yuan;
			currencyName = "юаней";
		}
		else if (currency == 4) {
			exchangeRate = Farit;
			currencyName = "фаритов";
		}
		else if (currency == 5) {
			exchangeRate = yen;
			currencyName = "йен";
		}

		float amountAfterCommission = rubles * (1 - 0.05);
		float exchangedAmount = amountAfterCommission / exchangeRate;

		std::cout << "Вы обменяли " << rubles << " рублей на " << exchangedAmount << " " << currencyName << ".\n";
	}
	else {
		std::cout << "Обмен отменён.\n";
	}

	return 0;
}