//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> fourSum(vector<int>& nums, int target) {
//		vector<vector<int>> ret;
//
//		std::sort(nums.begin(), nums.end());
//
//		unordered_multimap<int, vector<int>> umap;
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (i > 0 && nums[i] == nums[i - 1])
//			{
//				continue;
//			}
//			for (int j = i + 1; j < nums.size(); j++)
//			{
//				if (j > i + 1 && nums[j] == nums[j - 1])
//				{
//					continue;
//				}
//				umap.insert(pair<int, vector<int>>(nums[i] + nums[j], {i, j}));
//			}
//		}
//
//		for (auto kv : umap)
//		{
//			int l = kv.second[1] + 1;
//			int r = nums.size() - 1;
//			int other = target - kv.first;
//
//			while (l < r)
//			{
//				if (l == kv.second[0] || l == kv.second[1])
//				{
//					++l;
//					continue;
//				}
//				if (r == kv.second[0] || r == kv.second[1])
//				{
//					--r;
//					continue;
//				}
//				if (nums[l] + nums[r] == target - kv.first)
//				{
//					ret.push_back({ nums[kv.second[0]], nums[kv.second[1]], nums[l], nums[r] });
//
//					++l;
//					while (l < nums.size() && nums[l] == nums[l - 1])
//					{
//						++l;
//					}
//
//					--r;
//					while (r > 0 && nums[r] == nums[r + 1])
//					{
//						--r;
//					}
//				}
//				else if (nums[l] + nums[r] + kv.first < target)
//				{
//					++l;
//				}
//				else if (nums[l] + nums[r] + kv.first > target)
//				{
//					--r;
//				}
//			}
//		}
//
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 1000000000,1000000000,1000000000,1000000000 };
//	auto v2 = s.fourSum(v, 0);
//	return 0;
//}