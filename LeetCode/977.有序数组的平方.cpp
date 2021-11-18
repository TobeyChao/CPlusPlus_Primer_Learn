//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> sortedSquares(vector<int>& nums) {
//        vector<int> ret;
//        if (nums.size() == 1 || nums.size() == 0)
//        {
//            ret.push_back(nums[0] * nums[0]);
//            return ret;
//        }
//        int left = 0;
//        for (size_t i = 1; i < nums.size(); i++)
//        {
//            if (abs(nums[i]) <= abs(nums[i - 1]))
//            {
//                left = i;
//            }
//            else
//            {
//                break;
//            }
//        }
//        int right = left;
//        ret.push_back(nums[left] * nums[left]);
//        --left;
//        ++right;
//        while (left >= 0 && right <= nums.size() - 1)
//        {
//            int valL = nums[left];
//            int valR = nums[right];
//            int val = std::min(abs(valL), abs(valR));
//            if (abs(valL) <= abs(valR))
//            {
//                --left;
//            }
//            else
//            {
//                ++right;
//            }
//            ret.push_back(val * val);
//        }
//        while (left >= 0)
//        {
//            int val = nums[left];
//            --left;
//            ret.push_back(val * val);
//        }
//        while (right <= nums.size() - 1)
//        {
//            int val = nums[right];
//            ++right;
//            ret.push_back(val * val);
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ -4,-4,-3 };
//    vector<int> v2 = s.sortedSquares(v);
//    return 1;
//}