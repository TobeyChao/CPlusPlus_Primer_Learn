//#include <string>
//#include <complex>
//
//class Solution {
//public:
//	int reverse(int x) {
//		auto is_negative = x < 0;
//		if (x == -std::pow(2, 31))
//		{
//			return 0;
//		}
//		std::string str_num = std::to_string((int)fabs(x));
//		std::reverse(str_num.begin(), str_num.end());
//		if (is_negative)
//		{
//			if (std::stoll(str_num) > std::pow(2, 31))
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			if (std::stoll(str_num) > std::pow(2, 31) - 1)
//			{
//				return 0;
//			}
//		}
//		return std::stoi(str_num) * (is_negative ? -1 : 1);
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	int num = solution.reverse(-2147483641);
//
//	return 0;
//}
