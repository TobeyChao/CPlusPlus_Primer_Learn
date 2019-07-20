//#include <vector>
//
//class Solution {
//public:
//	int searchInsert(std::vector<int>& nums, int target) {
//		if (nums.empty())
//		{
//			return 0;
//		}
//		auto it = std::find(nums.begin(), nums.end(), target);
//		if (it != nums.end())
//		{
//			int pos = std::distance(nums.begin(), it);
//			return pos;
//		}
//		if (target < nums[0])
//		{
//			return 0;
//		}
//		if (target > nums[nums.size() - 1])
//		{
//			return nums.size();
//		}
//		for (int i = 0; i < nums.size() - 1; ++i)
//		{
//			if (target < nums[i + 1] && target > nums[i])
//			{
//				return i + 1;
//			}
//		}
//		return 0;
//	}
//};
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<int> vec{ 1,3,5,6 };
//	int num = solution.searchInsert(vec, 2);
//	return 0;
//}
