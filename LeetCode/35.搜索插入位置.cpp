//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int left = 0;
//        int right = nums.size() - 1;
//
//        while (left <= right)
//        {
//            int index = left + (right - left) * 0.5;
//            if (nums[index] == target)
//            {
//                return index;
//            }
//            else if (nums[index] > target)
//            {
//                right = index - 1;
//            }
//            else
//            {
//                left = index + 1;
//            }
//        }
//        // 此时一定是 left = right + 1
//        // left左面的（不包括left）小于target
//        // left右面的（包括left）大于target
//        return left;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1, 3, 5 };
//    int index = s.searchInsert(v, 2);
//    return 1;
//}