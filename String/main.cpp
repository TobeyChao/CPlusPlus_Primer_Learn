#include "String.h"
#include <string>

int main()
{
	const String str1("Hello");
	const String str2("Hello world");

	//�������캯��
	String str3 = str1;

	String str5 = String("hello");

	String str4 = str1 + str2;
	//���ظ�ֵ������
	str4 = str2;
	str4 + str2;
	//const���������const����������غ���

	std::cout<<"str3:\t" << str3 << std::endl;
	std::cout<<"str4:\t" << str4 << std::endl;
	system("pause");
	return 0;
}