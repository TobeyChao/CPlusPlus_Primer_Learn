///*
// * ����һ���ַ��������㽫�ַ������±��룬
// * ���������ַ��滻�ɡ��������ֵĸ��� + �ַ�����
// * �����ַ���AAAABCCDAA�ᱻ�����4A1B2C1D2A��
//
// */
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	char ch_tmp;
//	ch_tmp = str[0];
//	int count = 1;
//	if (str.size() == 1)
//	{
//		std::cout << count << ch_tmp;
//	}
//	for (int i = 1; i < str.size(); i++)
//	{
//		if (str[i] == ch_tmp)
//		{
//			count++;
//		}
//		else
//		{
//			std::cout << count << ch_tmp;
//			ch_tmp = str[i];
//			count = 1;
//		}
//		if (i + 1 == str.size())
//		{
//			std::cout << count << ch_tmp;
//		}
//	}
//	system("pause");
//	return 0;
//}