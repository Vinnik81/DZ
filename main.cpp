#include <iostream>
using namespace std;

//#define DEL
//#define PR_CH
//#define STAR
//#define CODE
//#define QUADRATE
#define WAGE


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef DEL
	int A, B;
	cout << "Введите первое число: "; cin >> A;
	cout << "Введите второе число: "; cin >> B;

	for (int i = A; i <= B; i++)
	{
		cout << i << " - ";

		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				cout << j << "; ";
			}
		}
		cout << endl;
	}
#endif // DEL

#ifdef PR_CH
	int k = 0;

	for (int i = 2; i <= 1000; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				k++;
			}
		}
		if (k < 3)
		{
			cout << i << "; ";
		}
		else
		{
			k = 0;
		}

	}
	cout << endl;
#endif // PR_CH

#ifdef STAR
	int n;
	cout << "Введите положительное нечетное число: "; cin >> n;
	if (n % 2 != 0 && n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				if (i == j || i + j == n - 1 || i == n / 2 || j == n / 2)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			cout << endl;
		}
	}
	else
	{
		cout << "Вы ввели неверное число!";
	}
#endif // STAR

#ifdef CODE
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i != j)
			{
				for (int k = 0; k < 10; k++)
				{
					if (i != k && j != k)
					{
						cout << i << " " << j << " " << k << "   ";

					}
				
				}
			}
		}

	}
	cout << "\n" << 720 * 3 << " секунд.";
#endif // CODE

#ifdef QUADRATE
	int n;
	cout << "Введите количество символов: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}

		}
		cout << endl;
	}
#endif // QUADRATE

#ifdef WAGE
	int i, j, n, zp = 0, zp12 = 0;
	for (i = 1; i <= 12; i++)
	{
		cout << "Введите зарплату " << i << " работника " << endl;

		for (j = 1; j <= 3; j++)
		{
			cout << "за " << j << " месяц: ";
			cin >> n;

			zp += n;
		}
		cout << "Зарплата за квартал: " << zp << endl;
		zp12 += zp;
		zp = 0;
	}
	cout << "Зарплата 12 сотрудников за квартал: " << zp12 << endl;
#endif // WAGE

}