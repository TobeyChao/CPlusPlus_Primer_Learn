//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	//int rob(vector<int>& nums) {
//	//    int max = -1;
//	//    get(true, nums, 0, 0, max);
//	//    return max;
//	//}
//
//	//void get(bool can, vector<int>& nums, int index, int cur, int& maxSum)
//	//{
//	//    if (index == nums.size())
//	//    {
//	//        maxSum = max(maxSum, cur);
//	//        return;
//	//    }
//	//    // 能拿这家的
//	//    if (can)
//	//    {
//	//        // 选择拿，下次不能拿
//	//        get(false, nums, index + 1, cur + nums[index], maxSum);
//	//        // 选择不拿，下次还能拿
//	//        get(true, nums, index + 1, cur, maxSum);
//	//    }
//	//    else
//	//    {
//	//        // 只能不拿，下次能拿
//	//        get(true, nums, index + 1, cur, maxSum);
//	//    }
//	//}
//
//	//int rob(vector<int>& nums) {
//	//    int max = -1;
//	//    return get(nums.size() - 1, nums);
//	//}
//	//int get(int index, vector<int>& nums)
//	//{
//	//    if (index < 0)
//	//    {
//	//        return 0;
//	//    }
//	//    int getIt = get(index - 2, nums) + nums[index];
//	//    int dontGetIt = get(index - 1, nums);
//	//    return max(getIt, dontGetIt);
//	//}
//
//	int rob(vector<int>& nums) {
//		vector<vector<int>> dp;
//
//		for (int i = 0; i < nums.size(); i++)
//		{
//			dp.push_back(vector<int>(2, 0));
//			dp[i][1] = nums[i] + ((i - 2 < 0) ? 0 : std::max(dp[i - 2][0], dp[i - 2][1]));
//			dp[i][0] = (i - 1) < 0 ? 0 : std::max(dp[i - 1][1], dp[i - 1][0]);
//		}
//
//		return std::max(dp[nums.size() - 1][0], dp[nums.size() - 1][1]);
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 3, 2, 1, 10, 12 };
//	int max = s.rob(v);
//	return 0;
//}