//#include <string>
//#include <vector>
//#include <set>
//
//class Solution {
//public:
//	int lengthOfLongestSubstring(std::string s) {
//		int max_length = 0;
//		int now_length = 0;
//		std::set<char> now_vec;
//
//		for (auto it = s.begin(); it < s.end(); ++it)
//		{
//			if (now_vec.find(*it) != now_vec.end())
//			{
//				if (now_length > max_length)
//				{
//					max_length = now_length;
//				}
//				char ch = *it;
//				--it;
//				while (*it != ch)
//				{
//					--it;
//				}
//				++it;
//				now_vec.clear();
//				now_vec.insert(*it);
//				now_length = 1;
//			}
//			else
//			{
//				now_vec.insert(*it);
//				now_length++;
//			}
//		}
//		if (now_length > max_length)
//		{
//			max_length = now_length;
//		}
//		return max_length;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	int length = solution.lengthOfLongestSubstring("dvdf");
//	return 0;
//}
