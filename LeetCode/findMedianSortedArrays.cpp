//#include <vector>
//
//class Solution {
//public:
//	double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
//		int size_num1 = nums1.size();
//		int size_num2 = nums2.size();
//		int sum = size_num1 + size_num2;
//		if (size_num1 == 0)
//		{
//			if (sum % 2 == 0)
//			{
//				return 0.5f * (nums2[sum / 2] + nums2[sum / 2 + 1]);
//			}
//			else
//			{
//				return nums2[(sum - 1) / 2];
//			}
//		}
//		else if (size_num2 == 0)
//		{
//			if (sum % 2 == 0)
//			{
//				return 0.5f * (nums1[sum / 2] + nums1[sum / 2 + 1]);
//			}
//			else
//			{
//				return nums1[(sum - 1) / 2];
//			}
//		}
//		else
//		{
//			int num1_left = 0;
//			int num1_right = nums1.size() - 1;
//			int num2_left = 0;
//			int num2_right = nums2.size() - 1;
//			while (num1_left < num1_right && num2_left < num2_right)
//			{
//				int mid_num1 = (num1_left + num1_right) * 0.5f;
//				int mid_num2 = (num1_left + num1_right) * 0.5f;
//				if (nums1[mid_num1] <= nums2[mid_num2])
//				{
//					
//				}
//				else
//				{
//					
//				}
//			}
//		}
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	
//}
