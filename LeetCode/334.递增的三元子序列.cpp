//#include "header.h"
//
//class Solution {
//public:
//	bool increasingTriplet(vector<int> nums) {
//		int min = INT_MAX;
//		int second = INT_MAX;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] <= min)
//			{
//				min = nums[i];
//			}
//			else if (nums[i] <= second)
//			{
//				second = nums[i];
//			}
//			else
//			{
//				return true;
//			}
//		}
//		return false;
//
//	}
//};
//
//int main()
//{
//	Solution s;
//	bool b = s.increasingTriplet({ 5, 1, 6 });
//	return 0;
//}