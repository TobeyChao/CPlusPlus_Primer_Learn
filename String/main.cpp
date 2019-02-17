#include "String.h"
#include <string>

int main()
{
	String str1("Hello");
	String str2("Hello world");

	//拷贝构造函数
	String str3 = str1;

	String str4;
	//重载赋值操作符
	str4 = str2;
	str4 + str2;
	//const变量会调用const的运算符重载函数

	std::cout<<"str3:\t" << str3 << std::endl;
	std::cout<<"str4:\t" << str4 << std::endl;
	system("pause");
	return 0;
}