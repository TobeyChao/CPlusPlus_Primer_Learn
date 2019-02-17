#pragma once
#include <string>
class Person
{
public:
	Person();
	Person(const std::string & name, const std::string & address, int age);
	~Person();
	std::string GetName() const
	{
		return name;
	}
	std::string GetAddress() const
	{
		return address;
	}
private:
	std::string name;
	int age;
	std::string address;
};

Person::Person()
{
}

inline Person::Person(const std::string & name, const std::string & address, int age)
	:
	name(name),
	address(address),
	age(age)
{
}

Person::~Person()
{
}