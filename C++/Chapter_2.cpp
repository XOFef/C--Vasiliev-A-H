#include <iostream>
#include <cmath>
using namespace std;


// Задание 15
int Sum(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			sum += i;
	}
	return sum;
}


int main()
{
	system("chcp 1251>nul");
	srand(time(0));

// ГЛАВА 2

// Задание 4
int a, b;
cin >> a >> b;
while (a > 0 && b > 0)
{
	if (a > b) a = a % b;
	else b = b % a;
}
cout << a + b;




// Задание 15

int b;
cin >> b;
cout << Sum(b);







// Задание 16
int choose;
string fib = "Число Фибоначи", nofib = "Число не является числом Фибоначи";
cin >> choose;
switch (choose)
{
case 1:
case 2:
case 3:
case 5:
case 8:
	cout << fib;
	break;
case 4:
case 6:
case 7:
case 9:
case 10:
	cout << nofib;
	break;
default:
	cout << "Введено неверное число!";
	break;
}


// Задание 17
srand(time(0));
int arr[10];
for (int& i : arr) {
	i = rand() % 100 + 1;
	cout << i << ' ';
}
for (int j = 0; j < 10 - 1; j++) {
	for (int i = 0; i < 10 - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			int a = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = a;
		}
	}
}
for (int& i : arr) {
	cout << endl;
	cout << i << endl;
}


// Задание 18
srand(time(0));
const int size = 10;
int A[size]{};

for (size_t i = 0; i < size; i++)
{
	A[i] = rand() % 101;
	cout << A[i] << " ";
}
cout << endl;
for (size_t i = 0; i < size / 2; i++)
{
	A[i] += A[size - i - 1];
	A[size - i - 1] = A[i] - A[size - i - 1];
	A[i] = A[i] - A[size - i - 1];
}
for (size_t i = 0; i < size; i++)
{
	cout << A[i] << " ";
}
cout << endl;



system("pause>nul");
return 0;
}