// Файл определения очереди с доступом Public
#pragma once
#include <iostream>
#include"QueueParent.h"
class Queue3 :private Queue
{
public:
	float harmonic3();

	bool empty3();
	void Push3(int new_data);
	int Pop3();
	void Copy3(Queue3& Q2);
	void unite3(Queue3& Q2, Queue3& Q3);
	void Print3();

private:

};