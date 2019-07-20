//#include <vector>
//
//class Solution {
//public:
//	int removeElement(std::vector<int>& nums, int val) {
//		if (nums.empty() || (std::find(nums.begin(), nums.end(), val) == nums.end()))
//		{
//			return nums.size();
//		}
//		
//		int left = 0;
//		int right = nums.size();
//		
//		while (left < right) 
//		{
//			if (nums[left] == val) {
//				nums[left] = nums[right - 1];
//				right--;
//			}
//			else 
//			{
//				left++;
//			}
//		}
//		return left;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<int> nums{ 0,1,2,2,3,0,4,2 };
//	int length = solution.removeElement(nums, 4);
//	return 0;
//}