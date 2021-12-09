/*
* sizeof
* 结构体对齐方式
* alignas 指定对齐方式
* alignof 获取对齐方式
*/


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

struct Info1
{
	uint8_t a;
	uint8_t c;
	uint16_t b;
};

class alignas(4) Info2
{
	virtual ~Info2()
	{};
	uint8_t a;
	uint8_t b;
	uint8_t c;

	uint16_t d;
	uint8_t e;
};

void Out(int* inArray, int inArray2[])
{
	std::cout << sizeof(inArray) << std::endl;
	std::cout << sizeof(inArray2) << std::endl;
	std::cout << inArray << std::endl;
	std::cout << ++inArray << std::endl;
	std::cout << ++inArray2 << std::endl;
	;
}

int main()
{
	/*std::cout << "bool: \t" << sizeof(bool) << std::endl;
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

	MyStruct s1(1);*/

	//std::cout << "Info1: \t" << sizeof(Info1) << std::endl;
	//std::cout << "Info1: \t" << alignof(Info1) << std::endl;

	//std::cout << "Info2: \t" << sizeof(Info2) << std::endl;
	//std::cout << "Info2: \t" << alignof(Info2) << std::endl;

	int a[] = { 0, 1, 2 };
	Out(a, a);
	return 0;
}