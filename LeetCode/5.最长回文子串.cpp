//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        if (s == "" || s.size() == 1)
//        {
//            return s;
//        }
//
//
//        string ret = "";
//        int index = 0;
//        int max = 0;
//        while (index <= s.size() - 1)
//        {
//            char ch = s[index];
//            int left = index;
//            int right = index;
//            // 先找相同的
//            while (index + 1 <= s.size() - 1 && s[index + 1] == ch)
//            {
//                ++index;
//                ++right;
//            }
//
//            // 然后向外扩散
//            while (left - 1 >= 0 && right + 1 <= s.size() - 1)
//            {
//                if (s[left - 1] == s[right + 1])
//                {
//                    --left;
//                    ++right;
//                }
//                else
//                {
//                    break;
//                }
//            }
//            if (right - left + 1 > max)
//            {
//                ret = s.substr(left, right - left + 1);
//                max = right - left + 1;
//            }
//            ++index;
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string ret = s.longestPalindrome("bb");
//    return 0;
//}