/*
 * ��ʮ���Ʊ�ʾ�У�����һ�����������������ַ���0��-��9����ʾ������
 * ���ǵ���0��-��9����Щ�ַ�ÿ���ַ�����������ʱ��������Щ���������޷���ʾ�����ˡ�
 * ��������������1����һ����2������ô���ܱ�ʾ��11��12��121�ȵȣ�
 * �����޷���ʾ��10��122��200������ 
����������ӵ��һЩ�ַ������Ƕ��ǡ�0��-��9�����ַ���
�����ѡ������һЩ�ַ�Ȼ��������ϳ�һ�����֣���ô�����޷���ɵ���С���������Ƕ��٣�
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
	//���ܰڳɵ���:��λ
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