//#pragma once
//#include <iostream>
//#include <string>
//using namespace std;
//class Foo
//{
//public:
//	Foo();
//	Foo(int _number);
//	explicit Foo(const string& s);
//	Foo(const Foo&);
//	void TestFoo(const Foo&);
//	~Foo();
//	Foo& operator= (const Foo&);
//
//private:
//	int number;
//};
//
//Foo::Foo()
//{
//	cout << "���캯��" << std::endl;
//}
//
//inline Foo::Foo(int _number)
//	:
//	number(_number)
//{
//	cout << "���캯��" << std::endl;
//}
//
//inline Foo::Foo(const string & s)
//{
//}
//
//inline Foo::Foo(const Foo & rhs)
//{
//	this->number = rhs.number;
//	cout << "�������캯��" << std::endl;
//}
//
//inline void Foo::TestFoo(const Foo &)
//{
//}
//
//Foo::~Foo()
//{
//	cout << "��������" << std::endl;
//}
//
//inline Foo& Foo::operator=(const Foo & rhs)
//{
//	cout << "���ظ�ֵ�����" << "��Foo" << rhs.number << "��Foo" << this->number << std::endl;
//	//this->number = rhs.number;
//	return *this;
//}