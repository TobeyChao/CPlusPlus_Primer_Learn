//#include <string>
//
//class Solution {
//public:
//	int lengthOfLastWord(std::string s) {
//		std::string::size_type index = s.find_last_of(" ");
//		//�ո��������
//		if (index != -1 && s.length() - 1 > index)
//		{
//			return s.length() - index + 1;
//		}
//		//ֻ�пո�
//		if (s.find_last_not_of(" ") == -1)
//		{
//			return 0;
//		}
//		//���һ���ǿո�
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
