//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <set>
//using namespace std;
//
//class Solution {
//public:
//	string minWindow(string s, string t) {
//		int needCount = t.size();
//		unordered_map<char, int> um;
//		set<char> all;
//		// ¼ÇÂ¼¸öÊý
//		for (int i = 0; i < t.size(); i++)
//		{
//			if (um.find(t[i]) != um.end())
//			{
//				um[t[i]]++;
//			}
//			else
//			{
//				um[t[i]] = 1;
//				all.insert(t[i]);
//			}
//		}
//
//		int l = 0, r = s.size() - 1;
//
//		auto left = s.begin();
//
//		bool flag = false;
//
//		auto tmp = um;
//
//		auto right = s.begin();
//		for (auto i = s.begin(); i != s.end(); )
//		{
//			if (um.find(*i) == um.end())
//			{
//				i++;
//				continue;
//			}
//			while (!needCount == 0 && right != s.end())
//			{
//				if (all.find(*right) != all.end())
//				{
//					if (tmp[*right] > 0)
//					{
//						tmp[*right]--;
//						needCount--;
//					}
//					else
//					{
//						tmp[*right]--;
//					}
//				}
//				
//				++right;
//			}
//
//			if (!needCount == 0 && flag == false)
//			{
//				return "";
//			}
//
//			if (needCount == 0 && right - i - 1 <= r - l)
//			{
//				l = i - s.begin();
//				r = right - 1 - s.begin();
//				flag = true;
//			}
//
//			if (tmp[*i] == 0)
//			{
//				needCount++;
//			}
//			tmp[*i]++;
//
//			i++;
//		}
//		if (flag)
//		{
//			return s.substr(l, r - l + 1);
//		}
//		else
//		{
//			return "";
//		}
//	}
//};
//
//int main()
//{
//	string s = "ADOBECODEBANC", t = "ABC";
//	Solution so;
//	auto ret = so.minWindow(s, t);
//	return 0;
//}