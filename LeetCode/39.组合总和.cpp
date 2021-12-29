//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        vector<vector<int>> res;
//
//        vector<int> single;
//        back(candidates, 0, 0, target, res, single);
//
//        return res;
//    }
//
//    void back(vector<int>& candidates, int lastIndex, int curSum, int target, vector<vector<int>>& res, vector<int>& single)
//    {
//        if (curSum == target)
//        {
//            res.emplace_back(single);
//            return;
//        }
//
//        if (curSum > target)
//        {
//            return;
//        }
//
//        for (int i = lastIndex; i < candidates.size(); i++)
//        {
//            single.push_back(candidates[i]);
//            curSum += candidates[i];
//            back(candidates, i, curSum, target, res, single);
//            single.pop_back();
//            curSum -= candidates[i];
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 2, 3, 5 };
//    auto res = s.combinationSum(v, 8);
//    return 0;
//}