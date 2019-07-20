#include "String.h"
#include <string>


void swap1(String& a, String& b)
{
	String tmp = a;
	a = b;
	b = tmp;
}

void swap2(std::string& a, std::string& b)
{
	std::string tmp = std::move(a);
	std::string * c = &tmp;
	std::string * d = &a;
	a = std::move(b);
	b = std::move(tmp);
	//使用右值引用可以把String tmp的mString值直接赋给b并且出了函数当tmp销毁时也不会使b.mString成为野指针
}

int main()
{
	String * nv;
	nv = new String("123");

	String str1("Hello");
	String str2("Hello world");
	std::cout << "第一次" << std::endl;
	swap1(str1, str2);

	std::cout << "str1:\t" << str1 << std::endl;
	std::cout << "str2:\t" << str2 << std::endl;

	std::cout << "第二次" << std::endl;

	String ccc = "abc";
	String bbb = "def";
	std::swap(ccc, bbb);

	std::cout << "str1:\t" << str1 << std::endl;
	std::cout << "str2:\t" << str2 << std::endl;

	system("pause");

	return 0;
}