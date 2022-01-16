//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    char slowestKey(vector<int> releaseTimes, string keysPressed) {
//		int maxTime = 0;
//		char ch = 0;
//		for (int i = 0; i < keysPressed.size(); i++)
//		{
//			int timeDelta = releaseTimes[i];
//			if (i != 0)
//			{
//				timeDelta -= releaseTimes[i - 1];
//			}
//			if (timeDelta >= maxTime)
//			{
//				if (timeDelta == maxTime)
//				{
//					ch = std::max(ch, keysPressed[i]);
//				}
//				else
//				{
//					maxTime = timeDelta;
//					ch = keysPressed[i];
//				}
//			}
//
//		}
//		return ch;
//    }
//};
//
//int main()
//{
//	Solution s;
//	s.slowestKey({ 12,23,36,46,62 }, "spuda");
//}