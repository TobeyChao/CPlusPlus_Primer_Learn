//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> getRow(int rowIndex) {
//        vector<int> v;
//        int res = 1;
//        v.push_back(res);
//        for (int col = 1; col <= rowIndex; col++)
//        {
//            int num = res * (rowIndex - col + 1) / (col - 1 + 1);
//            v.push_back(num);
//            res = num;
//        }
//        return v;
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto v = s.getRow(3);
//    return 0;
//}