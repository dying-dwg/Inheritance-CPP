// Файл реализации очереди с доступом Public
#include "Queue2.h"
float Queue2::harmonic2()
{
	int N = 0;
	long double sum = 0.0;
	Queue A;
	this->Copy(A);
	for (; !A.empty(); N++)
		sum = sum + (1.0 / A.Pop());

	return N / sum;
}

bool Queue2::empty2()
{
	return empty();
}

void Queue2::Push2(int new_data)
{
	Push(new_data);
}

int Queue2::Pop2()
{
	return Pop();
}

void Queue2::Copy2(Queue2& Q2)
{
	Copy(Q2);
}

void Queue2::unite2(Queue2& Q2, Queue2& Q3)
{
	unite(Q2, Q3);
}

void Queue2::Print2()
{
	Print();
}
