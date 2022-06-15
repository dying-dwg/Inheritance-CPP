#include <iostream>
#include "QueueParent.h"
#include "Queue1.h"
#include "Queue2.h" 
#include "Queue3.h"

using namespace std;


void noll()
{
	cout << "������� �� �������� ���������" << endl;
};

int main() //������� �������
{
	setlocale(LC_ALL, "Rus");
	Queue1 Q1, Q2, Q3; // public

	int StartKey;
	cout << "��������� ����� �������� c ������� �������: "
		<< "\n[1]: public (�� ����.)"
		<< "\n[2]: protected"
		<< "\n[3]: private \n-> "; cin >> StartKey;

	system("cls");

	if (StartKey == 2)
	{
		Queue2 Q1, Q2, Q3; // protected
		cout << "��������� ����� �������� c ������� �������: protected!";
	}
	else  if (StartKey == 3)
	{
		Queue3 Q1, Q2, Q3; // private
		cout << "��������� ����� �������� c ������� �������: private!";
	}
	else
		cout << "��������� ����� �������� c ������� ������� : public!";




	int key = 0;
	int element;
	do
	{
		cout << "\n~~~~|���������������� ����|~~~~\n"
			<< "\n[1]: ���������� �������� �������;"
			<< "\n[2]: ���������� �������� �������;"
			<< "\n[3]: ����� ������� �� �����;"
			<< "\n[4]: ���������� ���������� �������� (�������� ��������������);"
			<< "\n[5]: �������� ����� �������;"
			<< "\n[6]: ������� ������������ ������� � ������ � ����� ���������� �� �����;"
			<< "\n[7]: ����� �� ���������.\n-> "; cin >> key;

		// ���������� �������� � �������
		if (key == 1)
		{
			system("cls");
			cout << "������� ������� �������: "; cin >> element;
			Q1.Push(element);

		}
		// ���������� �������� ������� 
		else if (key == 2)
		{
			system("cls");
			try
			{
				cout << "����������� �������: " << Q1.Pop() << endl;
			}
			catch (int a)
			{
				noll();
			}
		}
		// ����� ������� �� �����
		else if (key == 3)
		{
			system("cls");
			if (!Q1.empty())
			{
				cout << "����� �������: ";  Q1.Print();
			}
			else
			{
				noll();
			}
		}
		// C������ ������������� 
		else if (key == 4)
		{
			system("cls");
			if (!Q1.empty())
			{
				cout << "������� �������������: " << Q1.harmonic();
			}
			else
			{
				noll();
			}
		}
		// C������� �����
		else if (key == 5)
		{
			system("cls");
			if (!Q1.empty())
			{
				Q1.Copy(Q2);
				cout << "������� ������������";
			}
			else
			{
				noll();
			}
		}
		// C������ ��������
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
		// �����
		else if (key == 7)
		{
			system("cls");
			cout << "��������� �����������. �������� ����.\n";
			break;
		}
		else if (7 < key || key < 1)
		{
			system("cls");
			cout << "�������������� ����� �� ������� 1-7!\n";
		}

	} while (key != '7');
	return 0;
}