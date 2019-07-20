//#include <iostream>
//#include <vector>
//#include <string>
//#include <iomanip>
//using namespace std;
//struct Time
//{
//	int h;
//	int m;
//	int s;
//};
//int main()
//{
//	int num_times;
//	cin >> num_times;
//	vector<Time> vec_times;
//	for (int i = 0; i < num_times; ++i)
//	{
//		string tmp_time;
//		cin >> tmp_time;
//		Time tmp;
//		
//		tmp.h = stoi(tmp_time.substr(0, 2));
//		tmp.m = stoi(tmp_time.substr(3, 2));
//		tmp.s = stoi(tmp_time.substr(6, 2));
//		vec_times.push_back(tmp);
//	}
//	
//	for (auto element : vec_times)
//	{
//		if (element.h > 23)
//		{
//			element.h = element.h % 10;
//		}
//		cout << setw(2) << setfill('0') << element.h << ":";
//		if (element.m > 59)
//		{
//			element.m = element.m % 10;
//		}
//		cout << setw(2) << setfill('0') << element.m << ":";
//		if (element.s > 59)
//		{
//			element.s = element.s % 10;
//		}
//		cout << setw(2) << setfill('0') << element.s << endl;
//	}
//	return 0;
//}