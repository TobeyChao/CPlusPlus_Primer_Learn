///*
// * С��ͬѧ���������һ����վ�����û�ע���˻���ʱ����Ҫ�����˻������룬Ϊ�˼�ǿ�˻��İ�ȫ�ԣ�С��������ǿ����һ��Ҫ��
//
//1. ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ��ɣ�
//
//2. ���벻�������ֿ�ͷ��
//
//3. ���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�
//
//4. ���볤������Ϊ8
//
//����С���ܵ���n�����룬��������д�����ж���Щ��������Щ�Ǻ��ʵģ���Щ�ǲ��Ϸ��ġ�
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