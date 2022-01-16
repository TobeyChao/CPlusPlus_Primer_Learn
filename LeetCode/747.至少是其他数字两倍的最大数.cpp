//#include "header.h"
//
//class Solution {
//public:
//    int dominantIndex(vector<int>& nums) {
//        if (nums.size() == 1)
//        {
//            return 0;
//        }
//        int first = -1;
//        int second = -1;
//        int firstIndex = -1;
//        int secondIndex = -1;
//
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] >= first)
//            {
//                second = first;
//                secondIndex = firstIndex;
//
//                first = nums[i];
//                firstIndex = i;
//            }
//            else if (nums[i] >= second)
//            {
//                second = nums[i];
//                secondIndex = i;
//            }
//        }
//        return (first >= second * 2) ? firstIndex : -1;
//    }
//};