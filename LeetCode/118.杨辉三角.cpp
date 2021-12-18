//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> v;
//        v.push_back({ 1 });
//        int index = 1;
//        for (int row = 1; row < numRows; row++)
//        {
//            vector<int> rowVec;
//            for (int col = 0; col <= row; col++)
//            {
//                vector<int>& rowLast = v[row - 1];
//                int indexleft = col - 1;
//                int indexRight = col;
//                int sum = 0;
//                if (indexleft >= 0)
//                {
//                    sum += rowLast[indexleft];
//                }
//                if (indexRight <= row - 1)
//                {
//                    sum += rowLast[indexRight];
//                }
//                rowVec.push_back(sum);
//            }
//            v.push_back(std::move(rowVec));
//        }
//        return v;
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto v = s.generate(3);
//    return 0;
//}