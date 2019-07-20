//#include <iostream>
//#include <string>
//#include <vector>
//
//int main(int argc, char* argv[])
//{
//	std::vector<std::vector<std::string>> vec_nums;
//	std::vector<std::string> strs;
//
//	int group_nums;
//	std::cin >> group_nums;
//
//	for (int i = 0; i < group_nums; ++i)
//	{
//		int row;
//		int col;
//		std::cin >> row;
//		std::cin >> col;
//		std::vector<std::string> vec_tmp;
//		for (int j = 0; j < row; ++j)
//		{
//			std::string tmp;
//			std::cin >> tmp;
//			vec_tmp.push_back(std::move(tmp));
//		}
//
//		std::string str = "";
//		std::cin >> str;
//		strs.push_back(str);
//		vec_nums.push_back(std::move(vec_tmp));
//	}
//	for (int index = 0; index < group_nums; ++index)
//	{
//		int length = strs[index].length();
//
//		//int right =  - length;
//		//int bottom = row - length;
//		//for (int i = 0; i <= bottom; ++i)
//		//{
//		//	for (int j = 0; j <= right; ++j)
//		//	{
//		//		//ºá
//
//		//		//Êú
//
//		//		//Ð±
//		//	}
//		//}
//	}
//}
