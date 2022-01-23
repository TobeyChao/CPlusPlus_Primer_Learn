#include <vector>
#include <string>

using namespace std;

//class Solution {
//public:
//    vector<string> divideString(string s, int k, char fill) {
//
//        vector<string> ret;
//        int size = s.size();
//
//        int fillNum = (k - size % k) % k;
//
//        for (int i = 0; i < size; i += k)
//        {
//            ret.push_back(s.substr(i, 3));
//        }
//        for (int i = 0; i < fillNum; i++)
//        {
//            ret.back().push_back(fill);
//        }
//
//        return ret;
//    }
//};

//class Solution {
//public:
//    int minMoves(int target, int maxDoubles) {
//        int count = 0;
//        while (target != 1)
//        {
//            if (target % 2 == 0)
//            {
//                if (maxDoubles > 0)
//                {
//                    target = target >> 1;
//                    maxDoubles--;
//                    count++;
//                }
//                else
//                {
//                    count += target - 1;
//                    target = 1;
//                }
//            }
//            else
//            {
//                count++;
//                target = target - 1;
//            }
//        }
//        return count;
//    }
//};

#include <unordered_map>

//class Solution {
//public:
//    unordered_map<int, long long> m;
//    long long mostPoints(vector<vector<int>> questions) {
//        long long ret = fun(questions, 0);
//        return ret;
//    }
//
//    long long fun(vector<vector<int>>& questions, int index)
//    {
//        if (index >= questions.size())
//        {
//            return 0;
//        }
//        if (m.count(index) != 0)
//        {
//            return m[index];
//        }
//        long long a = fun(questions, index + 1);
//        int nextindex = index + 1 + questions[index][1];
//        long long b = fun(questions, nextindex) + questions[index][0];
//        m[index] = std::max(a, b);
//        return m[index];
//    }
//};

//int main()
//{
//    Solution s;
//    s.mostPoints({ { 20,4},{78,2},{74,1},{48,1},{38,1},{80,3}});
//    return 0;
//}