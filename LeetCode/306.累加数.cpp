//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isAdditiveNumber(string num) {
//        return findNext(num, "", "", 0, "");
//    }
//
//    bool findNext(const string& num, string a, string b, int curIndex, string find)
//    {
//        if ((a.size() > 1 && a[0] == '0') ||
//            (b.size() > 1 && b[0] == '0'))
//        {
//            return false;
//        }
//        if (!a.empty() && !b.empty() && !find.empty())
//        {
//            if (num.find(find, curIndex) != curIndex)
//            {
//                return false;
//            }
//            else
//            {
//                if (curIndex + find.size() == num.size())
//                {
//                    return true;
//                }
//            }
//            
//        }
//        
//        for (int i = 1; i < num.size(); i++)
//        {
//            
//            string str = num.substr(curIndex, i);
//            string toFInd = add(b, str);
//            if (findNext(num, b, str, curIndex + i, toFInd))
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//
//    string add(string l, string r)
//    {
//        string s;
//        int lSize = l.size();
//        int rSize = r.size();
//        int carray = 0;
//        int i = 0;
//        while (true)
//        {
//
//            int lIndex = lSize - i - 1;
//            int rIndex = rSize - i - 1;
//
//            if (lIndex < 0 && rIndex < 0)
//            {
//                break;
//            }
//
//            int sum = (lIndex >= 0 ? (l[lIndex] - '0') : 0) + (rIndex >= 0 ? (r[rIndex] - '0') : 0) + carray;
//            if (sum >= 10)
//            {
//                carray = 1;
//                sum -= 10;
//            }
//            else
//            {
//                carray = 0;
//            }
//            s.push_back('0' + sum);
//
//            i++;
//        }
//        if (carray)
//        {
//            s.push_back('1');
//        }
//        std::reverse(s.begin(), s.end());
//        return s;
//    }
//};
//
//int main()
//{
//    Solution s;
//    bool b = s.isAdditiveNumber("101");
//    return 0;
//}