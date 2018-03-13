/*
 * linked_list.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: kolekjr
 */
#include <iostream>
#include "linked_list.h"

namespace datastructure
{

void list::insert_end(const int &value)
{
	node *tmp = new node;
	tmp->data = value;
	if (head == nullptr)
	{
		head = tmp;
		tail = tmp;
		tmp = nullptr;
	}
	else
	{
		tail->next = tmp;
		tail = tmp;
	}
}

void list::print_list() const
{
	node *curr = head;
	while (curr != nullptr)
	{
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}

void list::insert_start(const int &value)
{
	node *tmp = new node;
	tmp->data = value;
	tmp->next = head;
	head = tmp;
}

void list::insert_middle(const int &value, const int pos)
{
	node *curr = head;
	node *prev = nullptr;
	node *tmp = new node;
	tmp->data = value;
	int i = 0;
	while (i < pos && curr != nullptr)
	{
		prev = curr;
		curr = curr->next;
		++i;
	}
	if (curr == head)
		head = curr;

	prev->next = tmp;
	tmp->next = curr;
}

void list::delete_start()
{
	node *tmp = head;
	head = head->next;
	delete tmp;
}

}
