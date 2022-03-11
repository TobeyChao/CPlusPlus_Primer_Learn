// https://www.cnblogs.com/yc_sunniwell/archive/2010/07/14/1777431.html

#include <iostream>

extern "C" int i;
extern "C" int fun();

#include "eth1.h"

int main()
{
	std::cout << i << std::endl;
	std::cout << fun() << std::endl;

	std::cout << index << std::endl;
	std::cout << fun2() << std::endl;

	std::cout << a << std::endl;

	return 0;
}