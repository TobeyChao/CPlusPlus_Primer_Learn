#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

//class Solution {
//public:
//    bool checkValid(vector<vector<int>>& matrix) {
//        unordered_map<int, int> m;
//        int width = matrix.size();
//        for (int i = 0; i < width; i++)
//        {
//            m.clear();
//            for (int j = 0; j < width; j++)
//            {
//                if (m[matrix[i][j]] > 0)
//                {
//                    return false;
//                }
//                else
//                {
//                    m[matrix[i][j]]++;
//                }
//            }
//        }
//
//        for (int i = 0; i < width; i++)
//        {
//            m.clear();
//            for (int j = 0; j < width; j++)
//            {
//                //m.count(matrix[j][i]) > 0 && 
//                if (m[matrix[j][i]] > 0)
//                {
//                    return false;
//                }
//                else
//                {
//                    m[matrix[j][i]]++;
//                }
//            }
//        }
//        return true;
//    }
//};

//class Solution {
//public:
//    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
//        int count = 0;
//        unordered_map<string, int> m;
//        unordered_map<string, int> m2;
//        for (int i = 0; i < startWords.size(); i++)
//        {
//            std::sort(startWords[i].begin(), startWords[i].end());
//            m[startWords[i]]++;
//        }
//        for (int i = 0; i < targetWords.size(); i++)
//        {
//            std::sort(targetWords[i].begin(), targetWords[i].end());
//        }
//
//        for (int i = 0; i < targetWords.size(); i++)
//        {
//            for (int j = 0; j < targetWords[i].size(); j++)
//            {
//                string strTmp = targetWords[i];
//                string str = strTmp.erase(j, 1);
//                if (m[str] > 0)
//                {
//                    count++;
//                    break;
//                }
//            }
//        }
//        return count;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<string> v1;
//    v1.push_back("ant");
//    v1.push_back("act");
//    v1.push_back("tack");
//
//    vector<string> v2;
//    v2.push_back("tack");
//    v2.push_back("act");
//    v2.push_back("acti");
//    s.wordCount(v1, v2);
//
//    return 0;
//}

//class Solution {
//public:
//    int minSwaps(vector<int> nums) {
//        int oneCount = std::count(nums.begin(), nums.end(), 1);
//        if (oneCount == 0)
//        {
//            return 0;
//        }
//        int minVal = nums.size();
//        vector<int> v;
//        v.insert(v.end(), nums.begin(), nums.end());
//        v.insert(v.end(), nums.begin(), nums.end());
//        for (int i = 1; i <= v.size() - 1; i++)
//        {
//            v[i] += v[i - 1];
//        }
//
//        for (int i = 0; i <= v.size() - oneCount; i++)
//        {
//            int zeroCount = 0;
//            if (i == 0)
//            {
//                zeroCount = oneCount - (v[i + oneCount - 1]);
//            }
//            else
//            {
//                zeroCount = oneCount - (v[i + oneCount - 1] - v[i - 1]);
//            }
//            minVal = std::min(minVal, zeroCount);
//        }
//        return minVal;
//    }
//};
//
//int main()
//{
//    Solution s;
//    int val = s.minSwaps({ 0,0,0 });
//
//    return 0;
//}

//class Solution {
//public:
//	int earliestFullBloom(vector<int> plantTime, vector<int> growTime) {
//		vector<pair<int, int>> v;
//		for (int i = 0; i < plantTime.size(); i++)
//		{
//			v.push_back({ growTime[i], plantTime[i] });
//		}
//		std::sort(v.begin(), v.end(), [](const pair<int, int>& left, const pair<int, int>& right)
//			{
//				return left.first > right.first;
//			});
//		int res = 0;
//		int plant = 0;
//		for (int i = 0; i < v.size(); i++)
//		{
//			plant += v[i].second;
//			res = std::max(res, plant + v[i].first);
//		}
//		return res;
//	}
//};
//
//int main()
//{
//	Solution s;
//	s.earliestFullBloom({ 1,4,3 }, { 2,3,1 });
//	return 0;
//}