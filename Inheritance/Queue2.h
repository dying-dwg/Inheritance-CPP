// Файл определения очереди с доступом protected
#pragma once
#include <iostream>
#include "QueueParent.h"
class Queue2 :protected Queue
{
public:
	float harmonic2();

	bool empty2();
	void Push2(int new_data);
	int Pop2();
	void Copy2(Queue2& Q2);
	void unite2(Queue2& Q2, Queue2& Q3);
	void Print2();

private:

};

