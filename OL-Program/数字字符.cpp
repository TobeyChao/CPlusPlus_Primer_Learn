/*
 * 在十进制表示中，任意一个正整数都可以用字符’0’-‘9’表示出来。
 * 但是当’0’-‘9’这些字符每种字符的数量有限时，可能有些正整数就无法表示出来了。
 * 比如你有两个‘1’，一个‘2’，那么你能表示出11，12，121等等，
 * 但是无法表示出10，122，200等数。 
现在你手上拥有一些字符，它们都是’0’-‘9’的字符。
你可以选出其中一些字符然后将它们组合成一个数字，那么你所无法组成的最小的正整数是多少？
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int result;
	char * str = new char[20];
	cin >> str;
	vector<int> nums;
	while (*str)
	{
		int tmp = *str - '0';
		str++;
		nums.push_back(tmp);
	}
	//不能摆成的数:个位
	for (int i = 0; i <= 9; i++)
	{
		if (std::find(nums.begin(), nums.end(), i) == nums.end())
		{
			result = i;
			std::cout << result << endl;
			system("pause");
			return 0;
		}
	}
	if (std::find(nums.begin(), nums.end(), 0) == nums.end())
	{
		result = 10;
		std::cout << result << endl;
		system("pause");
		return 0;
	}
	std::cout << "Error" << endl;
	system("pause");
	return 0;
}