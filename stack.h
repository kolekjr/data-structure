/*
 * stack.h
 *
 *  Created on: Mar 20, 2018
 *      Author: kolekjr
 */

#ifndef STACK_H_
#define STACK_H_

namespace ds
{

#define MAX_STACK 1000

class stack
{
	int data[MAX_STACK];
	int top_el;
public:
	stack() : top_el(-1) {}

	void push(int value);
	int pop();
	bool isEmpty();
	int top();
};

}



#endif /* STACK_H_ */
