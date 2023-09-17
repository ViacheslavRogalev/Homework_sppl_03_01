#include<iostream>
#include <windows.h>
#include "smart_array.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {
		smart_array arr(5);
		//smart_array arr(-4); //ошибка создания
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		//arr.add_element(24); // ошибка добавления
		arr.print_smart_array();
		std::cout << arr.get_element(1) << std::endl;
		//std::cout << arr.get_element(8) << std::endl; // ошибка чтения
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}