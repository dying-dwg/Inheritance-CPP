#include <iostream>
#include "QueueParent.h"
#include "Queue1.h"
#include "Queue2.h" 
#include "Queue3.h"

using namespace std;


void noll()
{
	cout << "Очередь не содержит элементов" << endl;
};

int main() //главная функция
{
	setlocale(LC_ALL, "Rus");
	Queue1 Q1, Q2, Q3; // public

	int StartKey;
	cout << "Программа будет работать c режимом доступа: "
		<< "\n[1]: public (по умол.)"
		<< "\n[2]: protected"
		<< "\n[3]: private \n-> "; cin >> StartKey;

	system("cls");

	if (StartKey == 2)
	{
		Queue2 Q1, Q2, Q3; // protected
		cout << "Программа будет работать c режимом доступа: protected!";
	}
	else  if (StartKey == 3)
	{
		Queue3 Q1, Q2, Q3; // private
		cout << "Программа будет работать c режимом доступа: private!";
	}
	else
		cout << "Программа будет работать c режимом доступа : public!";




	int key = 0;
	int element;
	do
	{
		cout << "\n~~~~|Пользовательское меню|~~~~\n"
			<< "\n[1]: Добавление элемента очереди;"
			<< "\n[2]: Извлечение элемента очереди;"
			<< "\n[3]: Вывод очереди на экран;"
			<< "\n[4]: Вычисление требуемого значения (среднего гармонического);"
			<< "\n[5]: Создание копии очереди;"
			<< "\n[6]: Слияние оригинальной очереди с копией и вывод результата на экран;"
			<< "\n[7]: Выход из программы.\n-> "; cin >> key;

		// Добавление элемента в очередь
		if (key == 1)
		{
			system("cls");
			cout << "Введите элемент очереди: "; cin >> element;
			Q1.Push(element);

		}
		// Извлечение элемента очереди 
		else if (key == 2)
		{
			system("cls");
			try
			{
				cout << "Извлечённый элемент: " << Q1.Pop() << endl;
			}
			catch (int a)
			{
				noll();
			}
		}
		// Вывод очереди на экран
		else if (key == 3)
		{
			system("cls");
			if (!Q1.empty())
			{
				cout << "Вывод очереди: ";  Q1.Print();
			}
			else
			{
				noll();
			}
		}
		// Cреднее гармоническое 
		else if (key == 4)
		{
			system("cls");
			if (!Q1.empty())
			{
				cout << "Среднее гармоническое: " << Q1.harmonic();
			}
			else
			{
				noll();
			}
		}
		// Cоздание копии
		else if (key == 5)
		{
			system("cls");
			if (!Q1.empty())
			{
				Q1.Copy(Q2);
				cout << "Очередь скопированна";
			}
			else
			{
				noll();
			}
		}
		// Cлияние очередей
		else if (key == 6)
		{
			system("cls");
			if (!Q1.empty())
			{
				Q3.unite(Q1, Q2);
				Q3.Print();
			}
			else
			{
				noll();
			}
		}
		// Выход
		else if (key == 7)
		{
			system("cls");
			cout << "Программа остановлена. Закройте окно.\n";
			break;
		}
		else if (7 < key || key < 1)
		{
			system("cls");
			cout << "Воспользуйтесь одной из команда 1-7!\n";
		}

	} while (key != '7');
	return 0;
}