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
	cout << "���캯��" << std::endl;
}

inline Foo::Foo(int _number)
	:
	number(_number)
{
}

inline Foo::Foo(const Foo & rhs)
{
	this->number = rhs.number;
	cout << "�������캯��" << std::endl;
}

Foo::~Foo()
{
	cout << "��������" << std::endl;
}

inline Foo& Foo::operator=(const Foo & rhs)
{
	this->number = rhs.number;
	cout << "���ظ�ֵ�����" << std::endl;
	return *this;
}