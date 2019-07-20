///*
// * 小明同学最近开发了一个网站，在用户注册账户的时候，需要设置账户的密码，为了加强账户的安全性，小明对密码强度有一定要求：
//
//1. 密码只能由大写字母，小写字母，数字构成；
//
//2. 密码不能以数字开头；
//
//3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
//
//4. 密码长度至少为8
//
//现在小明受到了n个密码，他想请你写程序判断这些密码中哪些是合适的，哪些是不合法的。
// */
//#include <iostream>
//#include <string>
//#include <vector>
//#include <ctype.h>
//using namespace std;
//
//bool CheckIsNum(string & str)
//{
//	const char * psw = str.c_str();
//	if (isdigit(psw[0]))
//	{
//		return false;
//	}
//	return true;
//}
//
//bool CheckIsHasTwoType(string & str)
//{
//	int types_num = 0;
//	int types_char_upper = 0;
//	int types_char_lower = 0;
//
//	for (char ch : str)
//	{
//		if (isdigit(ch))
//		{
//			types_num = 1;
//		}
//		else if (isupper(ch))
//		{
//			types_char_upper = 1;
//		}
//		else if (islower(ch))
//		{
//			types_char_lower = 1;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	if (types_num + types_char_upper + types_char_lower < 2)
//	{
//		return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int num_psw;
//	cin >> num_psw;
//	vector<string> psws;
//	for (int i = 0; i < num_psw; i++)
//	{
//		string psw_tmp;
//		cin >> psw_tmp;
//		psws.push_back(psw_tmp);
//	}
//	for (auto psw : psws)
//	{
//		if (!(psw.length() >= 8))
//		{
//			cout << "NO" << endl;
//			//system("pause");
//			continue;
//		}
//		if (!CheckIsNum(psw))
//		{
//			cout << "NO" << endl;
//			//system("pause");
//			continue;
//		}
//		if (!CheckIsHasTwoType(psw))
//		{
//			cout << "NO" << endl;
//			//system("pause");
//			continue;
//		}
//		cout << "YES" << endl;
//	}
//	system("pause");
//	return 0;
//}