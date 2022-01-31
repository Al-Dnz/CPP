#include <iostream>
#include "Data.hpp"


uintptr_t serialize(Data* ptr)
{
	uintptr_t	res = reinterpret_cast<uintptr_t>(ptr);

	return res;
}

Data* deserialize(uintptr_t raw)
{
	Data* data  = reinterpret_cast<Data *>(raw);

	return data;
}

int main(void)
{
	Data *first_data = new Data();
	std::cout << "first_data_adress = "<< first_data << std::endl;

	uintptr_t ptr = serialize(first_data);
	Data *last_data = deserialize(ptr);

	std::cout << "last_data_adress  = " << last_data << std::endl;
	delete first_data;

	return 0;
}
