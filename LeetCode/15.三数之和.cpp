//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>& nums) {
//		vector<vector<int>> ret;
//		std::sort(nums.begin(), nums.end());
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (i > 0 && nums[i] == nums[i - 1]) continue;
//			int numi = nums[i];
//			int l = i + 1, r = nums.size() - 1;
//			while (l < r)
//			{
//				int sum = nums[l] + nums[r] + numi;
//				if (sum < 0)
//				{
//					++l;
//				}
//				else if (sum == 0)
//				{
//					ret.push_back({ nums[l], nums[r], numi });
//					++l;
//					--r;
//					while (l < r && nums[l] == nums[l - 1]) l++;
//					while (l < r && nums[r] == nums[r + 1]) r--;
//				}
//				else if (sum > 0)
//				{
//					--r;
//				}
//				if (l == i)
//				{
//					++l;
//				}
//				if (r == i)
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
//	vector<int> v{ -1,0,1,2,-1,-4 };
//	auto ret = s.threeSum(v);
//	return 0;
//}