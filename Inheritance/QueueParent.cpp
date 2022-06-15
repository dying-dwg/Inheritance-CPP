#include "QueueParent.h"

Queue::Queue() : last(nullptr) {}

Queue::~Queue()
{
	for (Node* temp = last; last; last = temp)
	{
		temp = last->next_ptr;
		delete last;
	}
}

bool Queue::empty() { return !last; }

void Queue::Push(int new_data)
{
	if (empty())
	{
		last = new Node;
		last->data = new_data;
		last->next_ptr = nullptr;
	}
	else
	{
		Node* temp = new Node;
		temp->next_ptr = last;
		temp->data = new_data;
		last = temp;
	}

}

int Queue::Pop()
{
	if (empty()) throw - 1;			// Вызываем исключения
	else if (!last->next_ptr)			// Проверка следующего элемента
	{
		int temp_data = last->data;
		delete last;
		last = nullptr;
		return temp_data;
	}
	else
	{
		Node* temp;
		for (temp = last; temp->next_ptr->next_ptr; temp = temp->next_ptr);	// Пока указатель существует 
		int temp_data = temp->next_ptr->data;
		delete temp->next_ptr;
		temp->next_ptr = nullptr;
		return temp_data;
	}
}

void Queue::Copy(Queue& Q2)
{
	for (; !Q2.empty(); Q2.Pop());
	if (!empty())
		Copy(Q2, last);
}

void Queue::Copy(Queue& Q2, Node* cur_ptr)
{
	if (cur_ptr->next_ptr)
		Copy(Q2, cur_ptr->next_ptr);
	Q2.Push(cur_ptr->data);
}

void Queue::unite(Queue& Q2, Queue& Q3)
{
	for (; !this->empty(); this->Pop());
	if (!Q2.empty())
		this->Copy(*this, Q2.last);
	if (!Q3.empty())
		this->Copy(*this, Q3.last);
}

void Queue::Print()
{
	Queue A;
	this->Copy(A);
	while (!(A.empty()))
		std::cout << A.Pop() << " ";
}
