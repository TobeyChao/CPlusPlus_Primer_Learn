//#include <vector>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<string> letterCombinations(string digits) {
//
//
//        vector<string> res;
//
//        if (digits.empty())
//        {
//            return res;
//        }
//        unordered_map<char, string> m;
//        m['2'] = "abc";
//        m['3'] = "def";
//        m['4'] = "ghi";
//        m['5'] = "jkl";
//        m['6'] = "mno";
//        m['7'] = "pqrs";
//        m['8'] = "tuv";
//        m['9'] = "wxyz";
//        string s;
//        back(res, m, digits, 0, s);
//        return res;
//    }
//
//    void back(vector<string>& res, unordered_map<char, string>& m, string& digits, int index, string& curStr)
//    {
//        if (index == digits.size())
//        {
//            res.emplace_back(curStr);
//            return;
//        }
//
//        for (char ch : m[digits[index]])
//        {
//            curStr.push_back(ch);
//            back(res, m, digits, index + 1, curStr);
//            curStr.pop_back();
//        }
//    }
//};