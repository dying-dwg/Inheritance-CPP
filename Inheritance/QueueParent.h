#pragma once

#include <iostream>

class Queue
{
private:
	class Node
	{
	public:
		Node* next_ptr;
		int data;
	};

	Node* last;
	void Copy(Queue& Q2, Node* cur_ptr);

public:
	Queue();
	~Queue();
	bool empty();

	void Push(int new_data);
	int Pop();

	void Copy(Queue& Q2);
	void unite(Queue& Q2, Queue& Q3);
	void Print();
};