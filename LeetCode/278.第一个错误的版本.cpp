//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isBadVersion(int version)
//    {
//        return true;
//    }
//
//    int firstBadVersion(int n) {
//        int left = 1;
//        int right = n;
//
//        while (left <= right)
//        {
//            int index = left + (right - left) * 0.5;
//            if (isBadVersion(index))
//            {
//                // 没有上一个
//                if (index - 1 < 1)
//                {
//                    return index;
//                }
//                // 上一个是好的
//                if (!isBadVersion(index - 1))
//                {
//                    return index;
//                }
//                // 上一个也是坏的
//                right = index - 1;
//
//            }
//            else
//            {
//                left = index + 1;
//            }
//        }
//        return -1;
//    }
//};