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
//                // û����һ��
//                if (index - 1 < 1)
//                {
//                    return index;
//                }
//                // ��һ���Ǻõ�
//                if (!isBadVersion(index - 1))
//                {
//                    return index;
//                }
//                // ��һ��Ҳ�ǻ���
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