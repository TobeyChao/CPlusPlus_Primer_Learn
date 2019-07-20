//#include <iostream>
//#include <cmath>
//#include <vector>
//bool Is(int num)
//{
//	if (num < 2)
//	{
//		return false;
//	}
//	else
//	{
//		for (int i = 2; i <= sqrt(num); ++i)
//		{
//			if (num % i == 0)
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//}
//
//int main()
//{
//	int left, right;
//	std::cin >> left >> right;
//	int tmp_count = 0;
//	int index = 2;
//	std::vector<int> res;
//	while (tmp_count < left - 1)
//	{
//		if (Is(index))
//		{
//			++tmp_count;
//		}
//		++index;
//	}
//	while (tmp_count < right)
//	{
//		if (Is(index))
//		{
//			++tmp_count;
//			res.push_back(index);
//		}
//		++index;
//	}
//
//	for (int i = 0; i < res.size(); ++i)
//	{
//		if (i != 0 && i % 10 == 0)
//		{
//			std::cout << std::endl;
//		}
//		if (i == res.size() - 1)
//			std::cout << res[i];
//		else
//			std::cout << res[i] << " ";
//	}
//	return 0;
//}