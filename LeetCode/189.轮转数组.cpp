//#include <vector>
//#include <deque>
//
//using namespace std;
//
//class Solution {
//public:
//    void rotate(vector<int>& nums, int k) {
//        //1.
//        deque<int> d;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            d.push_back(nums[i]);
//        }
//
//        for (size_t i = 0; i < k; i++)
//        {
//            int val = d.back();
//            d.push_front(val);
//            d.pop_back();
//        }
//
//        for (size_t i = 0; i < nums.size(); i++)
//        {
//            nums[i] = d.front();
//            d.pop_front();
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1,2,3,4,5,6,7 };
//    s.rotate(v, 3);
//    return 1;
//}