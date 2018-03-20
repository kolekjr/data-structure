/*
 * main.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: kolekjr
 */

#include <iostream>
#include "linked_list.h"
#include "stack.h"
#include "queue.h"

int main()
{
	// Single linked list
	ds::linked_list li;

	// Circular linked list
	ds::circular_list cli;

	// Circular linked list with border
	ds::circular_list_border clib;

	// Double linked list
	ds::double_linked_list dll;

	// Stack
	ds::stack stk;

	ds::queue que;

	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	que.push(5);

	std::cout << que.first() << std::endl;



	return 0;
}




