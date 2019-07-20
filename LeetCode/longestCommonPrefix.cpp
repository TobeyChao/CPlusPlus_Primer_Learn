//#include <string>
//#include <vector>
//
//class Solution {
//public:
//	std::string longestCommonPrefix(std::vector<std::string>& strs) {
//		std::string res("");
//		if (strs.empty())
//		{
//			return res;
//		}
//		std::string compare = strs[0];
//
//		for (size_t i = 0; i < compare.size(); ++i)
//		{
//			for (auto it = strs.begin() + 1; it != strs.end(); ++it)
//			{
//				if ((*it)[i] != compare[i])
//				{
//					return res;
//				}
//			}
//			res += compare[i];
//		}
//		return res;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<std::string> str{ "flower", "flow", "flight" };
//	std::string s = solution.longestCommonPrefix(str);
//	return 0;
//}
