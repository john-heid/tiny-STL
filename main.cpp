#include <iostream>
#include "tiny_vector.h"
#include <vector>

int main() {
	std::cout << "Hello World" << std::endl;

	std::vector dataguy{ 10, 999 };

	std::cout << dataguy[1] << std::endl;

	std::vector<int>::iterator it = dataguy.begin();
	std::cout << *it << std::endl;

	

}