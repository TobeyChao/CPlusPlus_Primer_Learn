//#include <vector>
//#include <algorithm>
//
//class Solution {
//public:
//	int maxSubArray(std::vector<int>& nums) {
//
//		int max_sum = nums[0];
//		int tmp_sum = 0;
//		for (auto element : nums)
//		{
//			if (tmp_sum > 0)
//			{
//				tmp_sum += element;
//			}
//			else
//			{
//				tmp_sum = element;
//			}
//			max_sum = std::max(max_sum, tmp_sum);
//		}
//		
//		return max_sum;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<int> vec{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
//	int num = solution.maxSubArray(vec);
//	return 0;
//}