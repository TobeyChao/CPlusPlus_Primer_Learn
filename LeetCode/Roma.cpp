//#include <string>
//#include <map>
//
///*
// * 罗马数字包含以下七种字符： I， V， X， L，C，D 和 M。
//
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
// */
//class Solution {
//public:
//	std::string intToRoman(int num) {
//		std::string res("");
//		std::map<int, std::string> map_roma;
//		map_roma[1] = "I";
//		map_roma[5] = "V";
//		map_roma[10] = "X";
//		map_roma[50] = "L";
//		map_roma[100] = "C";
//		map_roma[500] = "D";
//		map_roma[1000] = "M";
//		map_roma[4] = "VI";
//		map_roma[9] = "XI";
//		map_roma[40] = "LX";
//		map_roma[90] = "CX";
//		map_roma[400] = "DC";
//		map_roma[900] = "MC";
//		const auto it = map_roma.find(num);
//		if (it != map_roma.end())
//		{
//			res = it->second;
//			std::reverse(res.begin(), res.end());
//			return res;
//		}
//		int p = 1;
//		while (num)
//		{
//			//取个位
//			int single = num % 10;
//			num /= 10;
//			const auto it = map_roma.find(single * p);
//			//4 9 40 90 400 900
//			if (it != map_roma.end())
//			{
//				res += it->second;
//			}
//			else
//			{
//				if (single < 4)
//				{
//					for (int i = 0; i < single; i++)
//					{
//						res += map_roma[p];
//					}
//				}
//				else
//				{
//					for (int i = 0; i < single - 5; i++)
//					{
//						res += map_roma[p];
//					}
//					res += map_roma[5 * p];
//				}
//			}
//			p *= 10;
//		}
//		std::reverse(res.begin(), res.end());
//		return res;
//	}
//	int romanToInt(std::string s) {
//		int num = 0;
//		std::reverse(s.begin(), s.end());
//		for (auto it = s.begin(); it != s.end(); ++it)
//		{
//			switch (*it)
//			{
//			case 'I':
//				num += 1;
//				break;
//			case 'V':
//				num += 5;
//				if ((it + 1) != s.end() && *(it + 1) == 'I')
//				{
//					num -= 1;
//					++it;
//				}
//				break;
//			case 'X':
//				num += 10;
//				if ((it + 1) != s.end() && *(it + 1) == 'I')
//				{
//					num -= 1;
//					++it;
//				}
//				break;
//			case 'L':
//				num += 50;
//				if ((it + 1) != s.end() && *(it + 1) == 'X')
//				{
//					num -= 10;
//					++it;
//				}
//				break;
//			case 'C':
//				num += 100;
//				if ((it + 1) != s.end() && *(it + 1) == 'X')
//				{
//					num -= 10;
//					++it;
//				}
//				break;
//			case 'D':
//				num += 500;
//				if ((it + 1) != s.end() && *(it + 1) == 'C')
//				{
//					num -= 100;
//					++it;
//				}
//				break;
//			case 'M':
//				num += 1000;
//				if ((it + 1) != s.end() && *(it + 1) == 'C')
//				{
//					num -= 100;
//					++it;
//				}
//				break;
//			}
//		}
//		return num;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	int num = solution.romanToInt("MCMXCIV");
//
//	std::string roma = solution.intToRoman(58);
//
//	return 0;
//}