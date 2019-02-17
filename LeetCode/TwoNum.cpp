//#include <vector>
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