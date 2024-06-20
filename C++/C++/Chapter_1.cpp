#include <iostream>
#include <cmath>
using namespace std;


// Задание 10
double perevod(int km)
{
	int result;
	return km / 3.6;
}


// Задание 11
double perevod_1(int ms)
{
	int result;
	return ms * 3.6;
}

// Задание 12
double perevod_2(int a, int b)
{
	return a + b;
}

int main()
{
	system("chcp 1251>nul");
	srand(time(0));

	// ГЛАВА 1


	// Задание 1
	int num = 1;
	while (num <= 10) {
		cout << num << endl;
		num++;
	}


	// Задание 2
	while (num < 10)
	{
		cout << num << endl;
		num += 2;
	}


	// Задание 3
	int num1, res;
	cout << "Введите число: ";
	cin >> num1;
	res = 4 * num1 + 3;
	cout << "\nРезультат: " << res;


	//Задание 4
	int res, cyc, num1 = 1, num2 = 1;
	cout << "Введите количество выводимых чисел: ";
	cin >> cyc;
	while (cyc > 0)
	{

		res = num1 + num2;
		cout << res << endl;
		num2++;
		cyc--;
		while (cyc > 0)
		{
			res = num1 + num2;
			cout << res << endl;
			num1 = num2;
			num2 = res;
			cyc--;
		}
	}


	//Задание 8
	float fathom;
	float meter = 2.16, result;
	cout << "Ведите количество саженей: ";
	cin >> fathom;
	result = fathom * meter;
	cout << "В " << fathom << " саженях " << result << " метров";


	//Задание 9
	float fathom, arshina, result,
	fathom_meter = 2.16,
	fathom_cm = fathom_meter * 100,
	arshina_meter = fathom_meter / 3,
	arshina_cm = fathom_meter / 3 * 100;
	int choise1, choise2;
	cout << "Выберите, какую величину хотите ввести:" << endl << "1. сажень" << endl << "2. аршина" << endl;
	cin >> choise1;
	while (choise1 < 1 or choise1 > 2)
	{
		cout << "Неверно введено число! Введите еще раз" << endl;
		cout << "Выберите, какую величину хотите ввести: " << endl << "1. сажень" << endl << "2. аршина" << endl;
		cin >> choise1;
	}

	cout << "Выберите величину в которую хотите перевести:" << endl << "1. метр" << endl << "2. сантиметр" << endl;
	cin >> choise2;
	while (choise2 < 1 or choise2 > 2)
	{
		cout << "Неверно введено число! Введите еще раз" << endl;
		cout << "Выберите величину в которую хотете перевести:" << endl << "1. метр" << endl << "2. сантиметр" << endl;
		cin >> choise2;
	}

	if (choise1 == 1 and choise2 == 1)
	{
		cout << "Введите количество саженей: ";
		cin >> fathom;
		result = fathom * fathom_meter;
		cout << "Результат: " << result;
	}
	else if (choise1 == 1 and choise2 == 2)
	{
		cout << "Введите количество саженей: ";
		cin >> fathom;
		result = fathom * fathom_cm;
		cout << "Результат: " << result;
	}
	else if (choise1 == 2 and choise2 == 1)
	{
		cout << "Введите количество аршин: ";
		cin >> arshina;
		result = arshina * arshina_meter;
		cout << "Результат: " << result;
	}
	else if (choise1 == 2 and choise2 == 2)
	{
		cout << "Введите количество аршин: ";
		cin >> arshina;
		result = arshina * arshina_cm;
		cout << "Результат: " << result;
	}

	// Задание 10
	int km;
	cout << "Введите вашу скорость: ";
	cin >> km;
	int result = perevod(km);
	cout << "При переводе " << km << " км/ч в м/с получается: " << result << " м/с";


	// Задание 11
	float ms;
	cout << "Введите вашу скорость: ";
	cin >> ms;
	float result = perevod_1(ms);
	cout << "При переводе " << ms << " м/с в км/ч получается: " << result << " км/ч";


	// Задание 12
	int num1, num2;
	cout << "Введите первую цифру: ";
	cin >> num1;
	cout << "Введите вторую цифру: ";
	cin >> num2;
	int result = perevod_2(num1, num2);
	cout << "Cумма двух цифр: " << result;


	// Задание 16
	int nums[5],
	result,
	step = 0;

	for (int i = 0; i < 6; i++)
	{
		cout << "Введите число " << i << ": ";
		cin >> nums[i];
		result = nums[i] * step;
		cout << result << endl;
		step += 1;
	}


	// Задание 17
	int nums[5],
	result,
	step = 0;

	for (int i = 0; i < 6; i++)
	{
		nums[i + 1] = 2;
		result = nums[i] * step;
		cout << result << endl;
		step += 1;
	}


	// Задание 18
	int mas[5];
	int res, cyc = 5, num1 = 1, num2 = 1;

	for (int i = 0; i < 5; i++)
	{

		res = num1 + num2;
		mas[i + 1] = res;
		cout << mas[i + 1] << endl;
		num2++;
		cyc--;

		for (int i = 0; i < 5; i++)
		{
			res = num1 + num2;
			num1 = num2;
			num2 = res;
			mas[i + 1] = res;
			cout << mas[i + 1] << endl;
			cyc--;
		}
	}


	// Задание 19
	int mas[11];
	int num = 0, res;

	for (int i = 0; i < 11; i++)
	{
		if (num % 2 == 0)
		{
			mas[i + 1] = num;
		}
		else
		{
			res = num * num;
			mas[i + 1] = res;
		}
		num += 1;
	}
	for (int i = 0; i < 11; i++)
	{
		cout << mas[i + 1] << endl;
	}



	// Задание 20
	int nums[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Введите число " << i << ": ";
		cin >> nums[i + 1];
		cout << nums[i + 1] << endl;
	}

	system("pause>nul");
	return 0;
}

