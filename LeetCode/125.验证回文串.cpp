//#include <string>
//
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(string s)
//    {
//        string sNew;
//        for (int i = 0; i < s.size(); i++)
//        {
//
//            if (isdigit(s[i]) || isalpha(s[i]))
//            {
//                sNew.push_back(s[i]);
//            }
//        }
//        int l = 0, r = sNew.size() - 1;
//        while (l < r)
//        {
//            if (tolower(sNew[l]) != tolower(sNew[r]))
//            {
//                return false;
//            }
//            ++l;
//            --r;
//        }
//        return true;
//    }
//
//};