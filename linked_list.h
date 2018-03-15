/*
 * linked_list.h
 *
 *  Created on: Mar 13, 2018
 *      Author: kolekjr
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

namespace ds
{

struct node
{

	int data;
	node *next;

	node(int value) : data(value), next(nullptr) {}
};

/* Single linked list */
class linked_list
{

	node *head;
	node *tail;

public:
	linked_list() : head(nullptr), tail(nullptr) {}
	void insert_first(int value);
	void insert_last(int value);
	void insert_on_pos(int value, int pos);
	void delete_first();
	void print() const;
};



/* Circular linked list */
class circular_list
{
	node *last;

public:
	circular_list() : last(nullptr) {}
	void insert_first(int value);
	void insert_last(int value);
	void delete_first();
	void print() const;
};

/* Circular linked list with border */

class circular_list_border
{
	node* header;

public:
	circular_list_border()
	{
		header = new node(-1);
		header->next = header;
	}
	void insert_first(int value);
	void insert_last(int value);
	void delete_first();
	void print() const;
};

}

#endif /* LINKED_LIST_H_ */
