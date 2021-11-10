#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        std::multiset<char> m;

        for (auto it = 0; it < p.size(); it++)
        {
            m.insert(p.be);
        }
        vector<int> ret;
        const int offset = p.size();
        auto left = s.begin();
        for (left = s.begin(); left != s.end(); left++)
        {
            if (s.end() - left < offset)
            {
                break;
            }
            std::multiset<char> tmp;
            for (auto it = left; it < left + offset; it++)
            {
                tmp.insert(left, left + offset);
            }
            bool flag = true;
            for (auto it = tmp.begin(); it != tmp.end(); it++)
            {
                
            }
            if (flag)
            {
                ret.push_back(left - s.begin());
            }
        }
        return ret;
    }
};

int main()
{
    Solution s;
    auto ret = s.findAnagrams("abab", "ab");
    return 0;
}