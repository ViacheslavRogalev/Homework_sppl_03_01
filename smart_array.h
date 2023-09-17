#pragma once

class smart_array
{
public:
	smart_array(int n);
	void add_element(int el);
	int get_element(int n);
	void print_smart_array();
	~smart_array();

private:
	int curr_size;
	int full_size;
	int* head;
};