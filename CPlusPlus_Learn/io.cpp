//#include <fstream>
//#include <iostream>
//#include <sstream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char const *argv[])
//{
//	ifstream file;
//	file.open("Ð¦°Á½­ºþ.txt", ios::in);
//	if (!file)
//	{
//		cout << "read bad" << endl;
//	}
//
//	string str;
//	while (!file.eof())
//	{
//		file >> str;
//		cout << str << endl;
//	}
//	system("pause");
//
//	return 0;
//}
//
////#include <fstream>
////#include <iostream>
////#include <sstream>
////#include <string>
////#include <vector>
////
////using namespace std;
////
////struct PhoneInfo
////{
////	string name;
////	vector<string> phones;
////};
////
////int main(int argc, char const *argv[])
////{
////	ifstream file;
////	file.open("PeopleAndPhone.txt", ios::in);
////	if (!file)
////	{
////		cout << "read bad" << endl;
////		return 0;
////	}
////
////	string line;
////	string phone;
////
////	vector<PhoneInfo> rec;
////
////	while (!file.eof())
////	{
////		getline(file, line);
////		istringstream record;
////		record.str(line);
////		PhoneInfo pi;
////		record >> pi.name;
////		while (record >> phone)
////		{
////			pi.phones.push_back(phone);
////		}
////		rec.push_back(pi);
////	}
////
////	for (auto it : rec)
////	{
////		cout << it.name << " ";
////		for (auto it2 : it.phones)
////		{
////			cout << it2 << " ";
////		}
////		cout << endl;
////	}
////
////	system("pause");
////
////	return 0;
////}