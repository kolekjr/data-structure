/*
 * queue.h
 *
 *  Created on: Mar 20, 2018
 *      Author: kolekjr
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "linked_list.h"

namespace ds
{

class queue
{
	node *head;
	node *tail;

public:
	queue() : head(nullptr), tail(nullptr) {}

	void push(int value);
	void pop();
	int first();
	bool isEmpty();

};

}



#endif /* QUEUE_H_ */
