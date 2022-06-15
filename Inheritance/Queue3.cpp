// Файл реализации очереди с доступом Public
#include "Queue3.h"

float Queue3::harmonic3()
{
	int N = 0;
	long double sum = 0.0;
	Queue A;
	this->Copy(A);
	for (; !A.empty(); N++)
		sum = sum + (1.0 / A.Pop());

	return N / sum;
}

bool Queue3::empty3()
{
	return empty();
}

void Queue3::Push3(int new_data)
{
	Push(new_data);
}

int Queue3::Pop3()
{
	return Pop();
}

void Queue3::Copy3(Queue3& Q2)
{
	Copy(Q2);
}

void Queue3::unite3(Queue3& Q2, Queue3& Q3)
{
	unite(Q2, Q3);
}

void Queue3::Print3()
{
	Print();
}
