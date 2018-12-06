//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	//默认构造函数
//	string s1;
//
//	//带参的构造函数
//	string s2(s1);
//
//	//直接初始化
//	string s3("value");
//
//	//拷贝初始化
//	string s3_ = "value";
//
//	//但是编译器辉绕过拷贝构造函数将以上的代码改写为
//	string s3__("value");
//
//	string word("hello world!");
//	while (std::getline(cin, word))
//	{
//		cout << word << std::endl;
//	}
//	return 0;
//}