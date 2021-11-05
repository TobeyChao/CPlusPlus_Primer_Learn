//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <set>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> findAnagrams(string s, string p) {
//		vector<int> ret;
//
//		vector<int> pCount(26, 0);
//		vector<int> sCount(26, 0);
//		for (auto ch : p)
//		{
//			pCount[ch - 'a']++;
//		}
//		auto left = s.begin();
//		for (auto it = s.begin(); it != s.end(); it++)
//		{
//			char ch = *it;
//			sCount[ch - 'a']++;
//			while (sCount[ch - 'a'] > pCount[ch - 'a'])
//			{
//				sCount[*left - 'a']--;
//				left++;
//			}
//
//			if ((it - left + 1) == p.size())
//			{
//				ret.push_back(left - s.begin());
//			}
//		}
//
//		return ret;
//	}
//};
//
//int main()
//{
//	string s = "abab", t = "ab";
//	Solution so;
//	auto ret = so.findAnagrams(s, t);
//	return 0;
//}