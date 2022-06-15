// Файл реализации очереди с доступом Public
#include "Queue1.h"

float Queue1::harmonic()
{
	int N = 0;
	long double sum = 0.0;
	Queue A;
	this->Copy(A);
	for (; !A.empty(); N++)
		sum = sum + (1.0 / A.Pop());

	return N / sum;

}
