//#include <cstdint>
//
//class Solution {
//public:
//    uint32_t reverseBits(uint32_t n) {
//        
//        uint32_t sum = 0;
//
//        uint32_t flag = 1;
//        for (int i = 0; i < 32; i++)
//        {
//            if (i <= 15)
//            {
//                sum |= (n & (flag << i)) << (32 - i - 1 - i);
//            }
//            else
//            {
//                sum |= (n & (flag << i)) >> -(32 - i - 1 - i);
//            }
//        }
//
//        return sum;
//    }
//};
//
//int main()
//{
//    Solution s;
//    uint32_t num = s.reverseBits(43261596);
//    return 0;
//}