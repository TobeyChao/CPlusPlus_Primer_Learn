//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int l = 0;
//		int r = 0;
//		while (r < nums.size())
//		{
//			int val = nums[r];
//			if (val != 0)
//			{
//				std::swap(nums[l], nums[r]);
//				l++;
//				r++;
//			}
//			else
//			{
//				r++;
//			}
//		}
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 1,0, };
//	s.moveZeroes(v);
//	return 0;
//}