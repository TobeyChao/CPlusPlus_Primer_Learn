//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	vector<string> generateParenthesis(int n) {
//		vector<string> ret;
//
//		push(ret, "(", '(', n - 1, n);
//
//		return ret;
//	}
//
//	void push(vector<string>& retRef, string strCur, char ch, int remainLeft, int remainRight)
//	{
//		if (remainLeft == 0 && remainRight == 0)
//		{
//			retRef.push_back(strCur);
//			return;
//		}
//
//		if (remainLeft < remainRight)
//		{
//			if (remainLeft > 0)
//			{
//				push(retRef, strCur + '(', '(', remainLeft - 1, remainRight);
//			}
//			if (remainRight > 0)
//			{
//				push(retRef, strCur + ')', ')', remainLeft, remainRight - 1);
//			}
//		}
//		else if (remainLeft == remainRight)
//		{
//			push(retRef, strCur + '(', '(', remainLeft - 1, remainRight);
//		}
//		else
//		{
//
//		}
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<string> v = s.generateParenthesis(3);
//
//	return 0;
//}