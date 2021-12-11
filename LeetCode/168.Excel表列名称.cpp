//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string convertToTitle(int columnNumber) {
//		string res;
//		while (columnNumber)
//		{
//			int num1 = columnNumber % 26;
//			if (num1 == 0)
//			{
//				columnNumber--;
//				num1 += 26;
//			}
//			res.push_back('A' + num1 - 1);
//			columnNumber = columnNumber / 26;
//		}
//		std::reverse(res.begin(), res.end());
//		return res;
//    }
//};
//
//int main()
//{
//	Solution s;
//	s.convertToTitle(52);
//}