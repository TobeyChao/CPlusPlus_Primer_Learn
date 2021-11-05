#include <iostream>

struct MyStruct
{
	MyStruct(int i)
	{
		num = i;
	}
private:
	 int num;
};

int main()
{
	std::cout << "bool: \t" << sizeof(bool) << std::endl;
	std::cout << "int: \t" << sizeof(int) << std::endl;
	std::cout << "short: \t" << sizeof(short) << std::endl;
	std::cout << "long: \t" << sizeof(long) << std::endl;
	std::cout << "float: \t" << sizeof(float) << std::endl;
	std::cout << "double: \t" << sizeof(double) << std::endl;
	std::cout << "long double: \t" << sizeof(long double) << std::endl;
	std::cout << "char: \t" << sizeof(char) << std::endl;
	std::cout << "wchar_t: \t" << sizeof(wchar_t) << std::endl;
	int a = 0, b = 1;
	auto ptr = [&a, b]() -> MyStruct
	{
		a = 1;
		MyStruct s1(1);
		return s1;
	};

	MyStruct s1(1);

	return 0;
}

