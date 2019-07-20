//#include <string>
//
//class Solution {
//public:
//	int lengthOfLastWord(std::string s) {
//		std::string::size_type index = s.find_last_of(" ");
//		//空格后有文字
//		if (index != -1 && s.length() - 1 > index)
//		{
//			return s.length() - index + 1;
//		}
//		//只有空格
//		if (s.find_last_not_of(" ") == -1)
//		{
//			return 0;
//		}
//		//最后一个是空格
//		if (index == s.length() - 1)
//		{
//			int right = s.find_last_not_of(" ");
//
//			int left = s.find_last_of(" ", right);
//
//			int length = right - left;
//
//			return length;
//		}
//		return s.length();
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	solution.lengthOfLastWord("a ");
//	return 0;
//}
