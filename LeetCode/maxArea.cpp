//#include <vector>
//#include <algorithm>
//
//class Solution {
//public:
//	int maxArea(std::vector<int>& height) {
//		int left = 0;
//		int right = height.size() - 1;
//		int max_area = 0;
//		while (left < right)
//		{
//			int tmp = std::min(height[left], height[right]) * (right - left);
//			if (tmp > max_area)
//			{
//				max_area = tmp;
//			}
//			if (height[left] >= height[right])
//			{
//				right --;
//			}
//			else
//			{
//				left++;
//			}
//		}
//		return max_area;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<int> v{ 1, 8, 6, 2, 5, 4, 8, 3, 7 };
//	int area = solution.maxArea(v);
//	return 0;
//}