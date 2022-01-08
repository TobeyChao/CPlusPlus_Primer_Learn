#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

//class Solution {
//public:
//    string capitalizeTitle(string title) {
//		auto it = 0;
//		while (true)
//		{
//			if (it >= title.size())
//			{
//				break;
//			}
//			auto spaceIt = title.substr(it).find(' ');
//			if (spaceIt == -1)
//			{
//				spaceIt = title.size();
//			}
//			else
//			{
//				spaceIt += it;
//			}
//			int offset = spaceIt - it;
//			if (offset >= 3)
//			{
//				title[it] = toupper(title[it]);
//				for (int i = it + 1; i < spaceIt; i++)
//				{
//					title[i] = tolower(title[i]);
//				}
//			}
//			else
//			{
//				for (int i = it; i < spaceIt; i++)
//				{
//					title[i] = tolower(title[i]);
//				}
//			}
//			it = spaceIt + 1;
//		}
//		return title;
//    }
//};
//
//int main()
//{
//	Solution s;
//	string str = s.capitalizeTitle("capiTalIze tHe titLe");
//	return 0;
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <deque>

//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//    int pairSum(ListNode* head) {
//        deque<int> dq;
//        while (head)
//        {
//            dq.push_back(head->val);
//            head = head->next;
//        }
//
//        int maxVal = 0;
//
//        while (!dq.empty())
//        {
//            int l = dq.front();
//            int r = dq.back();
//            maxVal = std::max(maxVal, l + r);
//            dq.pop_back();
//            dq.pop_front();
//        }
//
//
//        return maxVal;
//    }
//};

//class Solution {
//public:
//    int longestPalindrome(vector<string>& words) {
//        unordered_map<string, int> map;
//        int doubleCount = 0;
//        int maxVal = 0;
//
//        for (int i = 0; i < words.size(); i++)
//        {
//            string& word = words[i];
//            if (word[0] == word[1])
//            {
//                if (map[word] > 0)
//                {
//                    doubleCount--;
//                }
//                else
//                {
//                    doubleCount++;
//                }
//            }
//            {
//                string str;
//                str.push_back(word[1]);
//                str.push_back(word[0]);
//                if (map[str] > 0)
//                {
//                    map[str]--;
//                    maxVal += 4;
//                }
//                else
//                {
//                    map[word]++;
//                }
//            }
//        }
//        if (doubleCount)
//        {
//            maxVal += 2;
//        }
//        return maxVal;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<string> v;
//    v.push_back("lc");
//    v.push_back("cl");
//    v.push_back("gg");
//    int a = s.longestPalindrome(v);
//
//	return 0;
//}

class Solution {
public:
    bool possibleToStamp(vector<vector<int>>& grid, int stampHeight, int stampWidth) {
        // ªπ≤Ó–±∂‘Ω«
        int row = grid.size();
        int col = grid[0].size();

        int minRow = col;
        int minCol = row;

        bool findAll1 = false;
        for (int i = 0; i < row; i++)
        {
            int index = 0;
            bool find = false;
            int minTmp = col;
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    if (index != 0)
                    {
                        minTmp = std::min(minTmp, index);
                    }
                    index = 0;
                }
                else
                {
                    find = true;
                    findAll1 = true;
                    index++;
                }
            }
            if (index != 0)
            {
                minTmp = std::min(minTmp, index);
            }
            if (find)
            {
                minRow = std::min(minRow, minTmp);
            }
        }
        if (!findAll1)
        {
            minRow = 0;
        }

        bool findAll2 = false;
        for (int i = 0; i < col; i++)
        {
            int index = 0;
            bool find = false;
            int minTmp = row;
            for (int j = 0; j < row; j++)
            {
                if (grid[j][i] == 1)
                {
                    if (index != 0)
                    {
                        minTmp = std::min(minTmp, index);
                    }
                    index = 0;
                }
                else
                {
                    find = true;
                    findAll2 = true;
                    index++;
                }
            }
            if (index != 0)
            {
                minTmp = std::min(minTmp, index);
            }
            if (find)
            {
                minCol = std::min(minCol, minTmp);
            }
        }
        if (!findAll2)
        {
            minCol = 0;
        }

        if (!findAll1 && !findAll2)
        {
            return true;
        }

        if (stampHeight <= minCol && stampWidth <= minRow)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid;
    grid.push_back({ 0,0,0,0,0 });
    grid.push_back({ 0,0,0,0,0 });
    grid.push_back({ 0,0,1,0,0 });
    grid.push_back({ 0,0,0,0,1 });
    grid.push_back({ 0,0,0,1,1 });
    s.possibleToStamp(grid, 2, 2);
    return 0;
}