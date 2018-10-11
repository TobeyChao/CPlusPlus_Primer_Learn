#pragma once
#include "Foo.h"

int main()
{
	Foo foo1(1);
	Foo foo2(2);
	Foo foo3(3);
	foo3 = foo2 = foo1;
}