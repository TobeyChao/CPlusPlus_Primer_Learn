//#include <string>
//
//class Solution {
//public:
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
//}