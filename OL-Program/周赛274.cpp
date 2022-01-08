#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    bool checkString(string s) {
//		int index = -1;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == 'b' && index == -1)
//			{
//				index = i;
//				continue;
//			}
//			if (s[i] == 'a' && index != -1)
//			{
//				return false;
//			}
//		}
//		return true;
//    }
//};

//class Solution {
//public:
//    int numberOfBeams(vector<string>& bank) {
//        int sum = 0;
//        int preNum = 0;
//
//        for (int i = 0; i < bank.size(); i++)
//        {
//            int curNum = 0;
//            string& str = bank[i];
//            for (char ch : str)
//            {
//                if (ch == '1')
//                {
//                    curNum++;
//                }
//            }
//            if (curNum != 0)
//            {
//                sum += curNum * preNum;
//                preNum = curNum;
//            }
//        }
//        return sum;
//    }
//};
//class Solution {
//public:
//    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
//        std::sort(asteroids.begin(), asteroids.end());
//        
//        long long curMass = mass;
//        for (int i = 0; i < asteroids.size(); i++)
//        {
//            if (curMass >= asteroids[i])
//            {
//                curMass += asteroids[i];
//            }
//            else
//            {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};

//#include <set>
//
//class Solution {
//public:
//    int maximumInvitations(vector<int>& favorite) {
//        int curMax = 0;
//        for (int i = 0; i < favorite.size(); i++)
//        {
//            vector<int> ls{ i };
//            back(favorite, i, ls, curMax);
//        }
//        return curMax;
//    }
//
//    void back(vector<int>& favorite, int index, vector<int>& curList, int& curMax)
//    {
//        int next = favorite[index];
//        // 形成环
//        if (next == curList[0] || (curList.size() >= 2 && next == curList[curList.size() - 2]))
//        {
//            curMax = std::max(curMax, (int)curList.size() + 1);
//            return;
//        }
//        // 没有形成环
//        if (std::find(curList.begin(), curList.end(), next) != curList.end())
//        {
//            return;
//        }
//        curList.push_back(next);
//        back(favorite, next, curList, curMax);
//    }
//};
//
//int main()
//{
//    vector<int> v{ 1,0,0,2,1,4,7,8,9,6,7,10,8 };
//    Solution s;
//    int res = s.maximumInvitations(v);
//    return 0;
//}