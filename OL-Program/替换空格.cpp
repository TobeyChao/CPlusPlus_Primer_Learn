//
//
//
//#include <cstring>
//
//class Solution {
//public:
//	void replaceSpace(char *str, int length)
//	{
//		int count_space = 0;
//		for (int i = 0; i < length; ++i)
//		{
//			if (str[i] == ' ')
//			{
//				++count_space;
//			}
//		}
//		int offset = 2 * count_space;//一个空格移动2
//
//		//例
//		//hello world hello####   17 -> 21
//		int left = length - 1;
//		int right = length + offset - 1;
//		while (left < right)
//		{
//			if (str[left] != ' ')
//			{
//				str[right--] = str[left--];
//			}
//			else
//			{
//				--left;
//				str[right--] = '0';
//				str[right--] = '2';
//				str[right--] = '%';
//			}
//		}
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	char str[] = "hello world hello    ";
//	int n = sizeof(str);
//	solution.replaceSpace(str, 17);
//	n = strlen(str);
//	return 0;
//}