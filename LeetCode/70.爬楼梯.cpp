//
//class Solution {
//public:
//	int climbStairs(int n) {
//		if (n == 1)
//		{
//			return 1;
//		}
//		if (n == 2)
//		{
//			return 2;
//		}
//		/*return climbStairs(n - 1) + climbStairs(n - 2);*/
//		int a = 1;
//		int b = 2;
//		int sum = 0;
//		for (int i = 3; i <= n; i++)
//		{
//			sum = a + b;
//			a = b;
//			b = sum;
//		}
//		return sum;
//	}
//};
//
//int main()
//{
//	Solution s;
//	int num = s.climbStairs(10);
//	return 0;
//}