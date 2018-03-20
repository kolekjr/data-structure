/*
 * stack.cpp
 *
 *  Created on: Mar 20, 2018
 *      Author: kolekjr
 */

#include <iostream>
#include "stack.h"

namespace ds
{

void stack::push(int value)
{
	if (top_el >= MAX_STACK)
	{
		std::cout << "Stack overlow" << std::endl;
	}
	else
	{
		data[++top_el] = value;
	}
}

int stack::pop()
{
	if (isEmpty())
	{
		std::cout << "Stack is empty" << std::endl;
		return -1;
	}
	return data[top_el--];
}

bool stack::isEmpty()
{
	return top_el < 0;
}

int stack::top()
{
	if (isEmpty())
	{
		std::cout << "Stack is empty" << std::endl;
		return -1;
	}
	else
	{
		return data[top_el];
	}
}

}



