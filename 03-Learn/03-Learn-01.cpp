#include <iostream>

int main()
{
	std::cout << "short: \t" << sizeof(short) << std::endl;
	unsigned short a = 65535;
	std::cout << a << std::endl;
	a++;
	std::cout << a << std::endl;
	std::cout << 100000 % 65536 << std::endl;
	system("pause");
}