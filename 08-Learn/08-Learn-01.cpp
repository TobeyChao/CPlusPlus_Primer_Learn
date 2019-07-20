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
	//ʹ����ֵ���ÿ��԰�String tmp��mStringֱֵ�Ӹ���b���ҳ��˺�����tmp����ʱҲ����ʹb.mString��ΪҰָ��
}

int main()
{
	String * nv;
	nv = new String("123");

	String str1("Hello");
	String str2("Hello world");
	std::cout << "��һ��" << std::endl;
	swap1(str1, str2);

	std::cout << "str1:\t" << str1 << std::endl;
	std::cout << "str2:\t" << str2 << std::endl;

	std::cout << "�ڶ���" << std::endl;

	String ccc = "abc";
	String bbb = "def";
	std::swap(ccc, bbb);

	std::cout << "str1:\t" << str1 << std::endl;
	std::cout << "str2:\t" << str2 << std::endl;

	system("pause");

	return 0;
}