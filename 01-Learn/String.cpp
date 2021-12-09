#include "String.h"


String::String(const char * str)
{
#if _DEBUG
	std::cout << "construct" << std::endl;
#endif // _DEBUG

	//判断str是不是空指针
	str = str ? str : "";

	//因为还有一个\0，所以要加1
	mString = new char[strlen(str) + 1];
	strcpy_s(mString, strlen(str) + 1, str);
}

String::String(const String & str)
{
#if _DEBUG
	std::cout << "lvalue copy construct" << std::endl;
#endif // _DEBUG

	mString = new char[strlen(str.mString) + 1];
	strcpy_s(mString, strlen(str.mString) + 1, str.mString);
}

String::String(String && str)
{
#if _DEBUG
	std::cout << "rvalue copy construct" << std::endl;
#endif // _DEBUG

	mString = str.mString;
	str.mString = nullptr;
}

String::~String()
{
#if _DEBUG
	std::cout << "deconstruct" << std::endl;
#endif // _DEBUG
	if (mString)
	{
		delete[] mString;
		mString = nullptr;
	}
}

String & String::operator=(const String & rhs)
{
#if _DEBUG
	std::cout << "lvalue reference assignment" << std::endl;
#endif // _DEBUG
	if (strlen(mString) != strlen(rhs.mString))
	{
		delete[] mString;
		mString = new char[strlen(rhs.mString) + 1];
	}
	strcpy_s(mString, strlen(rhs.mString) + 1, rhs.mString);
	return *this;
}

String & String::operator=(String && rhs)
{
#if _DEBUG
	std::cout << "rvalue reference assignment" << std::endl;
#endif // _DEBUG
	mString = rhs.mString;
	rhs.mString = nullptr;
	return *this;
}

String String::operator+(const String & rhs)
{
	return String();
}

String String::operator+(const String & rhs) const
{
	return String();
}

std::ostream & operator<<(std::ostream & out, const String & str)
{
	out << str.mString;
	return out;
}