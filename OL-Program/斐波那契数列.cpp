//class Solution {
//public:
//	int Fibonacci(int n) {
//		if (n == 0)
//		{
//			return 0;
//		}
//		if (n == 1)
//		{
//			return 1;
//		}
//		//0 1 1 2 3 5
//		int one = 0;
//		int two = 1;
//
//		int now = one + two;
//		for (int i = 2; i <= n; ++i)
//		{
//			now = one + two;
//			one = two;
//			two = now;
//		}
//		return now;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	int num = solution.Fibonacci(5);
//	return 0;
//}
