//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		int l = 0;
//		int r = numbers.size() - 1;
//		while (l < r)
//		{
//			if (numbers[l] + numbers[r] == target)
//			{
//				return { l, r };
//			}
//			else if (numbers[l] + numbers[r] < target)
//			{
//				++l;
//			}
//			else
//			{
//				--r;
//			}
//		}
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 2,7,11,15 };
//	vector<int> res = s.twoSum(v, 9);
//	return 0;
//}