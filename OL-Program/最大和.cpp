/*
 * 在一个N*N的数组中寻找所有横，竖，左上到右下，右上到左下，四种方向的直线连续D个数字的和里面最大的值
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
			//对nums[i][j]的四周进行相加测试
			//横
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
			
			//竖
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
			//左下到右上
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
			
			//左上到右下
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