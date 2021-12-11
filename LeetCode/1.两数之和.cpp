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


//#include <vector>
//#include <map>
//
//class Solution
//{
//public:
//	std::vector<int> twoSum(std::vector<int>& nums, int target)
//	{
//		int l, r;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			for (int j = 0; j < nums.size(); j++)
//			{
//				if (nums[i] + nums[j] == target && i != j)
//				{
//					return { i, j };
//				}
//			}
//		}
//		return std::vector<int>();
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<int> vec_int{ 2, 3, 4, 7 };
//
//	std::vector<int> res = solution.twoSum(vec_int, 9);
//
//	return 0;
//}
//
////½â·¨2
////class Solution {
////public:
////	std::vector<int> twoSum(std::vector<int> &numbers, int target) {
////		std::map<int, int> mapping;
////		std::vector<int> res;
////		for (int i = 0; i < numbers.size(); ++i) {
////			mapping[numbers[i]] = i;
////		}
////		for (int i = 0; i < numbers.size(); i++) {
////			int searched = target - numbers[i];
////			if (mapping.find(searched) != mapping.end() && i != mapping[searched]) {
////				res.push_back(i + 1);
////				res.push_back(mapping[searched] + 1);
////				break;
////			}
////		}
////		return res;
////	}
////};