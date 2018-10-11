#pragma once
#include <iostream>
using namespace std;
class Foo
{
public:
	Foo();
	Foo(int _number);
	Foo(const Foo&);
	~Foo();
	Foo& operator= (const Foo&);

private:
	int number;
};

Foo::Foo()
{
	cout << "构造函数" << std::endl;
}

inline Foo::Foo(int _number)
	:
	number(_number)
{
}

inline Foo::Foo(const Foo & rhs)
{
	this->number = rhs.number;
	cout << "拷贝构造函数" << std::endl;
}

Foo::~Foo()
{
	cout << "析构函数" << std::endl;
}

inline Foo& Foo::operator=(const Foo & rhs)
{
	this->number = rhs.number;
	cout << "重载赋值运算符" << std::endl;
	return *this;
}