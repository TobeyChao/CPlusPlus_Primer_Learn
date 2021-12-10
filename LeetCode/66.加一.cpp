//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits) {
//        bool carry = true;
//        vector<int> ret = digits;
//
//        int i = ret.size() - 1;
//
//        while (carry)
//        {
//            if (i < 0)
//            {
//                ret.insert(ret.begin(), 1);
//                break;
//            }
//            int num = ret[i];
//            num += 1;
//            if (num >= 10)
//            {
//                ret[i] = num % 10;
//                --i;
//            }
//            else
//            {
//                ret[i] = num;
//                carry = false;
//            }
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1, 2, 3 };
//    auto v1 = s.plusOne(v);
//
//    return 0;
//}