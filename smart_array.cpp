#include"smart_array.h"
#include <iostream>
#include <sstream>
#include "ErrorEx.h"

smart_array::smart_array(int n)
{
	if (n < 1)
	{
		std::stringstream message;
		message << "Недопустимый размер создаваемого умного массива!\n";
		throw ArrayException(message.str());
	}
	head = new int[n]();
	curr_size = 0;
	full_size = n;
}

void smart_array::add_element(int el)
{
	if (curr_size >= full_size)
	{
		std::stringstream message;
		message << "Превышен размер умного массива для добавления элементов!\n";
		throw ArrayException(message.str());
	}
	*(head + curr_size) = el;
	++curr_size;
}

int smart_array::get_element(int n)
{
	if (n > curr_size)
	{
		std::stringstream message;
		message << "Недопустимый индекс при обращении к элементу массива!\n";
		throw ArrayException(message.str());
	}
	return *(head + n);
}

void smart_array::print_smart_array()
{
	for (int i = 0; i < curr_size; ++i)
		std::cout << *(head + i) << " ";
	std::cout << std::endl;
}

smart_array::~smart_array()
{
	delete[] head;
	head = nullptr;
}
