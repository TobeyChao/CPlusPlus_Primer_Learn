//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	void sortColors(vector<int>& nums) {
//		if (nums.empty() || nums.size() == 1)
//		{
//			return;
//		}
//		int left = 0;
//		int right = nums.size() - 1;
//		while (left < nums.size() && nums[left] == 0)
//		{
//			++left;
//		}
//		while (right >= 0 && nums[right] == 2)
//		{
//			--right;
//		}
//		if ((left - right) >= 0)
//		{
//			return;
//		}
//
//		for (int i = left; i <= right; )
//		{
//			if (nums[i] == 1)
//			{
//				i++;
//				continue;
//			}
//			else if (nums[i] == 2)
//			{
//				swap(nums[i], nums[right]);
//			}
//			else if (nums[i] == 0)
//			{
//				swap(nums[i], nums[left]);
//			}
//
//			while (nums[left] == 0 && left < nums.size())
//			{
//				++left;
//			}
//			while (nums[right] == 2 && right >= 0)
//			{
//				--right;
//			}
//			if ((left - right) >= 0)
//			{
//				return;
//			}
//			i = left;
//		}
//	}
//};
//int main()
//{
//	Solution s;
//	//vector<int> v{ 2,0,2,1,1,0 };
//	vector<int> v{ 2,0,1 };
//	//vector<int> v{ 0, 0 };
//	s.sortColors(v);
//	return 0;
//}