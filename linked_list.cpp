/*
 * linked_list.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: kolekjr
 */
#include <iostream>
#include "linked_list.h"

namespace ds
{

/* Single linked list */

void linked_list::insert_first(int value)
{
	node *tmp = new node(value);

	tmp->next = head;
	head = tmp;
}

void linked_list::insert_last(int value)
{
	node *tmp = new node(value);

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

void linked_list::insert_on_pos(int value, int pos)
{
	node *curr = head;
	node *prev = nullptr;
	node *tmp = new node(value);

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

void linked_list::delete_first()
{
	node *tmp = head;

	head = head->next;
	delete tmp;
}

void linked_list::remove(int value)
{
	node **indirect = &head;
	node *tmp;

	while ((*indirect)->data != value)
	{
		indirect = &((*indirect)->next);
	}
	tmp = *indirect;

	*indirect = (*indirect)->next;

	delete tmp;
}

void linked_list::print() const
{
	node *curr = head;

	while (curr != nullptr)
	{
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}

/* Circular linked list */

void circular_list::insert_first(int value)
{
	node *tmp = new node(value);

	if (last == nullptr)
	{
		tmp->next = tmp;
		last = tmp;
	}
	else
	{
		tmp->next = last->next;
		last->next = tmp;
	}
}

void circular_list::insert_last(int value)
{
	node *tmp = new node(value);

	if (last == nullptr)
	{
		tmp->next = tmp;
	}
	else
	{
		tmp->next = last->next;
		last->next = tmp;
	}
	last = tmp;
}

void circular_list::delete_first()
{
	if (last != nullptr)
	{
		if (last == last->next)
		{
			last = nullptr;
		}
		else
		{
			last->next = last->next->next;
		}
	}
}

void circular_list::print() const
{
	node* curr = last->next;

	while (curr != last)
	{
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
	std::cout << curr->data << std::endl;
}

/* Circular linked list with border(header) */

void circular_list_border::insert_first(int value)
{
	node *tmp = new node(value);

	tmp->next = header->next;
	header->next = tmp;
}

void circular_list_border::insert_last(int value)
{
	node *tmp = new node(-1);

	tmp->next = header->next;
	header->next = tmp;
	header->data = value;
	header = tmp;
}

void circular_list_border::delete_first()
{
	header->next = header->next->next;
}

void circular_list_border::print() const
{
	node* curr = header->next;

	while (curr != header)
	{
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}

/* Double linked list */

void double_linked_list::insert(int value)
{
	dlnode *tmp = new dlnode(value);

	if(first == nullptr)
	{
		first = tmp;
		last = first;
	}
	else
	{
		tmp->next = first;
		first->prev = tmp;
		first = tmp;
	}
}

void double_linked_list::remove(int value)
{
	dlnode *prev = nullptr;
	dlnode *curr = first;

	while (curr != nullptr && curr->data != value)
	{
		prev = curr;
		curr = curr->next;
	}

	if (prev == nullptr)
	{
		delete curr;
	}
	else
	{
		prev->next = curr->next;
		curr->next->prev = prev;
		delete curr;
	}

}

void double_linked_list::print() const
{
	dlnode *curr = first;

	while (curr != nullptr)
	{
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}

void double_linked_list::print_reverse() const
{
	dlnode *curr = last;

	while (curr != nullptr)
	{
		std::cout << curr->data << std::endl;
		curr = curr->prev;
	}
}

} // end namespace ds


