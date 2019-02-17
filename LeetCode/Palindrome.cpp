//#include <string>
//
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		std::string str = std::to_string(x);
//		int start = 0, end = str.length() - 1;
//
//		while (start <= end)
//		{
//			if (str[start] != str[end])
//			{
//				return false;
//			}
//			start++;
//			end--;
//		}
//		return true;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution s;
//	bool b = s.isPalindrome(121);
//	b = s.isPalindrome(1);
//	b = s.isPalindrome(11);
//	b = s.isPalindrome(1221);
//	b = s.isPalindrome(1222);
//	b = s.isPalindrome(123);
//	return 0;
//}
