#pragma once
#include <iostream>
class String
{
	friend std::ostream& operator<<(std::ostream& out, const String& str);
public:
	String(char const * str = "");
	String(const String & str);
	~String();

	String & operator=(const String & rhs);
	String operator+(const String & rhs);
	String operator+(const String & rhs) const;
private:
	char * mString;
};