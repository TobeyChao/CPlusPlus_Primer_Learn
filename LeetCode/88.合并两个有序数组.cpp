//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int it = m + n - 1;
//        int it1 = m - 1;
//        int it2 = n - 1;
//        while (it2 >= 0 && it1 >= 0)
//        {
//            if (nums2[it2] < nums1[it1])
//            {
//                nums1[it--] = nums1[it1--];
//            }
//            else
//            {
//                nums1[it--] = nums2[it2--];
//            }
//        }
//        while (it2 >= 0)
//        {
//            nums1[it--] = nums2[it2--];
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 3, 24, 48, 0, 0, 0 };
//    vector<int> v1{ 1, 22, 40 };
//    s.merge(v, 3, v1, 3);
//
//    return 0;
//}