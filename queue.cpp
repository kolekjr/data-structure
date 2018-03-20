/*
 * queue.cpp
 *
 *  Created on: Mar 20, 2018
 *      Author: kolekjr
 */

#include <iostream>
#include "queue.h"

namespace ds
{

void queue::push(int value)
{
	node *tmp = new node(value);

	if (isEmpty())
	{
		head = tmp;
		tail = head;
	}
	else
	{
		tail->next = tmp;
		tail = tmp;
	}
}

void queue::pop()
{
	node *tmp = head;

	if (head->next == nullptr)
		delete head;

	head = head->next;
	delete tmp;
}

int queue::first()
{
	if (isEmpty())
	{
		std::cout << "Queue is empty" << std::endl;
		return -1;
	}

	return head->data;

}

bool queue::isEmpty()
{
	return head == nullptr;
}

}


