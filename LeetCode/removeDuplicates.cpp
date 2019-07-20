//#include <vector>
//
//class Solution {
//public:
//	int removeDuplicates(std::vector<int>& nums) {
//		if (nums.empty())
//		{
//			return 0;
//		}
//		std::vector<int> newVec;
//		newVec.push_back(nums[0]);
//		int tmp = nums[0];
//		for (size_t i = 1; i < nums.size(); ++i)
//		{
//			if (nums[i] != tmp)
//			{
//				tmp = nums[i];
//				newVec.push_back(nums[i]);
//			}
//		}
//		nums = newVec;
//		return nums.size();
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<int> vec{ 0,0,1,1,1,2,2,3,3,4 };
//	solution.removeDuplicates(vec);
//	return 0;
//}
