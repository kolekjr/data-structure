/*
 * linked_list.h
 *
 *  Created on: Mar 13, 2018
 *      Author: kolekjr
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

namespace datastructure
{

struct node
{
	int data;
	node *next;
};

class list
{
	node *head;
	node *tail;

public:
	list() : head(nullptr), tail(nullptr) {}
	void insert_end(const int &value);
	void insert_start(const int &value);
	void insert_middle(const int &value,const int pos);
	void delete_start();
	void print_list() const;
};

}

#endif /* LINKED_LIST_H_ */
