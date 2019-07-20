//#include <string>
//#include <vector>
//
//class Solution {
//public:
//	std::string convert(std::string s, int numRows) {
//		if (numRows == 1)
//		{
//			return s;
//		}
//		std::string res = "";
//		int T = numRows * 2 - 2;
//		//the first row
//		for (size_t i = 0; i < s.size(); i += T)
//		{
//			res += s[i];
//		}
//		for (size_t row = 1; row < numRows - 1; ++row)
//		{
//			int now_t = 0;
//			while (true)
//			{
//				if (now_t * T + row < s.size())
//				{
//					res += s[now_t * T + row];
//				}
//				else
//				{
//					break;
//				}
//				if ((now_t + 1) * T - row < s.size())
//				{
//					res += s[(now_t + 1) * T - row];
//				}
//				else
//				{
//					break;
//				}
//				++now_t;
//			}
//		}
//		//the last row
//		for (size_t i = numRows - 1; i < s.size(); i += T)
//		{
//			res += s[i];
//		}
//		return res;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::string s = solution.convert("LEETCODEISHIRING", 3);
//	return 0;
//}
