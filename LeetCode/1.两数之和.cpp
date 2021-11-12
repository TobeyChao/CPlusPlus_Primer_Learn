//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;

//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> ret;
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			for (size_t j = i + 1; j < nums.size(); j++)
//			{
//				if (nums[i] + nums[j] == target)
//				{
//					ret.push_back(i);
//					ret.push_back(j);
//					return ret;
//				}
//			}
//		}
//		return ret;
//	}
//};
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		unordered_map<int, int> m;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			auto it = m.find(target - nums[i]);
//			if (it != m.end())
//			{
//				return { i, it->second };
//			}
//			m.insert({ nums[i], i });
//		}
//		return {};
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 3, 2, 4 };
//	auto v2 = s.twoSum(v, 6);
//	return 0;
//}