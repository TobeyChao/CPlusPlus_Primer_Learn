//#include <cstdint>
//
//class Solution {
//public:
//    int hammingWeight(uint32_t n) {
//        int sum = 0;
//        for (int i = 0; i < 32; i++)
//        {
//            sum += (n >> i) & 1;
//        }
//        return sum;
//    }
//};
//
//int main()
//{
//    Solution s;
//    int num = s.hammingWeight(5);
//    return 0;
//}