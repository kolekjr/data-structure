/*
 * main.cpp
 *
 *  Created on: Mar 13, 2018
 *      Author: kolekjr
 */

#include <iostream>
#include "linked_list.h"

int main()
{

	datastructure::list li;
	int tmp;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "[" << i << "] = ";
		std::cin >> tmp;
		li.insert_end(tmp);

	}

	li.insert_middle(100, 3);
	li.print_list();
	std::cout << "========" << std::endl;
	li.delete_start();
	li.print_list();

	return 0;
}




