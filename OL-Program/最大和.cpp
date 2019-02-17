/*
 * ��һ��N*N��������Ѱ�����кᣬ�������ϵ����£����ϵ����£����ַ����ֱ������D�����ֵĺ���������ֵ
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int M, D;
	cin >> M >> D;
	vector<vector<int>> nums;
	for (size_t i = 0; i < M; i++)
	{
		vector<int> vec_tmp;
		for (size_t j = 0; j < M; j++)
		{
			int tmp;

			cin >> tmp;
			vec_tmp.push_back(tmp);
		}
		nums.push_back(vec_tmp);
	}
	int max_sum = -60000000;
	int tmp_sum = 0;
	
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			//��nums[i][j]�����ܽ�����Ӳ���
			//��
			tmp_sum = 0;
			if (j < M - D + 1)
			{
				for (int y = j; y < j + D; y++)
				{
					tmp_sum += nums[i][y];
				}
				if (tmp_sum > max_sum)
				{
					max_sum = tmp_sum;
				}
			}
			
			//��
			tmp_sum = 0;
			if (i < M - D + 1)
			{
				for (int x = i; x < i + D; x++)
				{
					tmp_sum += nums[x][j];
				}
				if (tmp_sum > max_sum)
				{
					max_sum = tmp_sum;
				}
			}
			//���µ�����
			tmp_sum = 0;
			if (j < M - D + 1 && i > D - 2)
			{
				for (int x = i, y = j; (y < j + D) && (x > i - D); x--, y++)
				{
					tmp_sum += nums[x][y];
				}
				if (tmp_sum > max_sum)
				{
					max_sum = tmp_sum;
				}
			}
			
			//���ϵ�����
			tmp_sum = 0;
			if (j < M - D + 1 && i < M - D + 1)
			{
				for (int x = i, y = j; (y < j + D) && (x < i + D); x++, y++)
				{
					tmp_sum += nums[x][y];
				}
				if (tmp_sum > max_sum)
				{
					max_sum = tmp_sum;
				}
			}
		}
	}
	std::cout << max_sum;
	system("pause");
}