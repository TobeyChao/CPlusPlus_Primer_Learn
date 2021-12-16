//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        // 左大于等于右
//        string& l = a.size() >= b.size() ? a : b;
//        string& r = a.size() < b.size() ? a : b;
//        string ret;
//        bool carry = false;
//        for (int reverseIndex = 0; reverseIndex < l.size(); reverseIndex++)
//        {
//            int indexL = l.size() - reverseIndex - 1;
//            int indexR = r.size() - reverseIndex - 1;
//            
//            int sum = (l[indexL] - '0');
//            if (indexR >= 0)
//            {
//                sum += (r[indexR] - '0');
//            }
//            if (carry)
//            {
//                ++sum;
//            }
//            if (sum >= 2)
//            {
//                ret.insert(ret.begin(), '0' + sum % 2);
//                carry = true;
//            }
//            else
//            {
//                ret.insert(ret.begin(), '0' + sum);
//                carry = false;
//            }
//        }
//        if (carry)
//        {
//            ret.insert(ret.begin(), '1');
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string res = s.addBinary("1010", "1011");
//    return 0;
//}