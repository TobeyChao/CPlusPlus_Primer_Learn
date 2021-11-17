//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int left = 0;
//        int right = nums.size() - 1;
//
//        while (left <= right)
//        {
//            int index = (int)((left + right) * 0.5f);
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
//        return -1;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1, 3, 5 };
//    int index = s.search(v, 3);
//    return 1;
//}