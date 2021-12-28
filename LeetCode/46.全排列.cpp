//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        // 标记数组
//        vector<bool> visit(nums.size(), false);
//        vector<int> resSingle(nums.size(), 0);
//        vector<vector<int>> res;
//        intersection(nums, resSingle, 0, visit, res);
//        return res;
//    }
//
//    void intersection(vector<int>& nums, vector<int>& resSingle, int index, vector<bool>& visit, vector<vector<int>>& res)
//    {
//        if (index == nums.size())
//        {
//            res.emplace_back(resSingle);
//            return;
//        }
//
//        for (int i = 0; i < visit.size(); i++)
//        {
//            if (!visit[i])
//            {
//                visit[i] = true;
//                resSingle[i] = nums[index];
//                intersection(nums, resSingle, index + 1, visit, res);
//                visit[i] = false;
//            }
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1, 2, 3};
//    vector<vector<int>> res = s.permute(v);
//    return 0;
//}