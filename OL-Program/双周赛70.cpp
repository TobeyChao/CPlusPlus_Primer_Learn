#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

//class Solution {
//public:
//    int minimumCost(vector<int>& cost) {
//
//        std::sort(cost.begin(), cost.end());
//        int sum = 0;
//        int index = 1;
//        for (int i = cost.size() - 1; i >= 0; i--)
//        {
//            if (index % 3 != 0)
//            {
//                sum += cost[i];
//            }
//            ++index;
//        }
//
//        return sum;
//    }
//};

//class Solution {
//public:
//    int numberOfArrays(vector<int> differences, int lower, int upper) {
//        long maxOffset = INT_MIN;
//        long minOffset = INT_MAX;
//        long offset = 0;
//        for (int i = 0; i < differences.size(); i++)
//        {
//            offset += differences[i];
//            maxOffset = std::max(maxOffset, offset);
//            minOffset = std::min(minOffset, offset);
//        }
//
//        long leftMax = upper - maxOffset;
//        if (leftMax > upper)
//        {
//            leftMax = upper;
//        }
//        long leftMin = lower - minOffset;
//        if (leftMin < lower)
//        {
//            leftMin = lower;
//        }
//
//        return std::max((int)leftMax - (int)leftMin + 1, 0);
//    }
//};
//
//class Solution {
//public:
//    struct MyStruct
//    {
//        int path;
//        vector<int> pos;
//        int price;
//    };
//    int dir[4][2] = { {0, -1}, {0, 1}, {-1, 0}, {1, 0} };
//    vector<vector<int>> highestRankedKItems(vector<vector<int>>& grid, vector<int>& pricing, vector<int>& start, int k) {
//        int height = grid.size();
//        int width = grid[0].size();
//        queue<vector<int>> q;
//        vector<vector<bool>> v;
//        vector<MyStruct> pq;
//
//        int low = pricing[0];
//        int upper = pricing[1];
//
//        for (int i = 0; i < grid.size(); i++)
//        {
//            v.push_back(vector<bool>(grid[i].size(), false));
//        }
//
//        q.push({ start[0], start[1]});
//        v[start[0]][start[1]] = true;
//        int pathIndex = 0;
//        while (!q.empty())
//        {
//            int len = q.size();
//            for (int i = 0; i < len; i++)
//            {
//                const vector<int>& s = q.front();
//                int x = s[0];
//                int y = s[1];
//                q.pop();
//
//                if (grid[x][y] >= low && grid[x][y] <= upper)
//                {
//                    MyStruct m;
//                    m.path = pathIndex;
//                    m.pos = { x, y };
//                    m.price = grid[x][y];
//                    pq.push_back(std::move(m));
//                }
//
//                for (int i = 0; i < 4; ++i) {
//                    int nx = x + dir[i][0];
//                    int ny = y + dir[i][1];
//                    if (nx >= 0 && nx < height && ny >= 0 && ny < width && (!v[nx][ny]) && grid[nx][ny] > 0) {
//                        v[nx][ny] = true;
//
//                        q.push({ nx, ny });
//                    }
//                }
//            }
//            ++pathIndex;
//        }
//
//        auto f = [&](const MyStruct& a, const MyStruct& b)
//        {
//            if (a.path == b.path)
//            {
//                if (a.price == b.price)
//                {
//                    if (a.pos[0] == b.pos[0])
//                    {
//                        return a.pos[1] < b.pos[1];
//                    }
//                    else
//                    {
//                        return a.pos[0] < b.pos[0];
//                    }
//                }
//                else
//                {
//                    return a.price < b.price;
//                }
//            }
//            else
//            {
//                return a.path < b.path;
//            }
//        };
//        std::sort(pq.begin(), pq.end(), f);
//
//        vector<vector<int>> res;
//        if (pq.size() >= k)
//        {
//            for (int i = 0; i < k; i++)
//            {
//                res.push_back(pq[i].pos);
//            }
//            return res;
//        }
//        else
//        {
//            for (int i = 0; i < pq.size(); i++)
//            {
//                res.push_back(pq[i].pos);
//            }
//        }
//
//        return res;
//    }
//};