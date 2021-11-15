//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//		if (s.size() == 0 || s.size() == 1)
//		{
//			return s.size();
//		}
//		int max = 1;
//		auto it1 = s.begin();
//		auto it2 = s.begin() + 1;
//		while (it2 != s.end())
//		{
//			auto result = std::find(it1, it2, *it2);
//			if (result != it2)
//			{
//				it1 = result + 1;
//			}
//			else
//			{
//				++it2;
//				max = std::max(max, int(it2 - it1));
//			}
//		}
//    }
//};
//
//int main()
//{
//	Solution s;
//	auto v2 = s.lengthOfLongestSubstring("abcb");
//	return 0;
//}