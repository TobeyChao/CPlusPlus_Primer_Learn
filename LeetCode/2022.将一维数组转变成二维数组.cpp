//#include "header.h"
//
//class Solution {
//public:
//    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
//        int maxVal = m * n;
//        vector<vector<int>> v;
//        if (maxVal != original.size())
//        {
//            return v;
//        }
//
//        for (int i = 0; i < m; i++)
//        {
//            vector<int> vTmp;
//            vTmp.insert(vTmp.end(),
//                original.begin() + i * n,
//                original.begin() + i * n + n >= original.end() ? original.end() - 1 : original.begin() + i * n + n);
//            v.push_back(std::move(vTmp));
//        }
//
//        return v;
//    }
//};