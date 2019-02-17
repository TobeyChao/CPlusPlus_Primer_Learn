//#include <string>
//#include <set>
//
//class Solution {
//public:
//	int numJewelsInStones(std::string J, std::string S) {
//		int count = 0;
//		std::set<char> ch_set;
//		for (auto element : J)
//		{
//			ch_set.insert(element);
//		}
//		for (auto element : S)
//		{
//			if (ch_set.find(element) != ch_set.end())
//			{
//				count++;
//			}
//		}
//		return count;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	int num = solution.numJewelsInStones("aA", "aAAbbbb");
//	return 0;
//}