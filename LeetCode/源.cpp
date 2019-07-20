//#include <iostream>
//#include <algorithm>
//
//int main()
//{
//	int x, f, d, p;
//	std::cin >> x >> f >> d >> p;
//	int add_apple = 0;
//	int num_house_day = d / x;
//	int max_day = std::min(f, num_house_day);
//	int tmp_day = 0;
//	while ((d - (add_apple * p)) / x > 0)
//	{
//		add_apple++;
//		num_house_day = (d - (add_apple * p)) / x;
//		tmp_day = std::min(f + add_apple, num_house_day);
//		if (tmp_day > max_day)
//		{
//			max_day = tmp_day;
//		}
//		else
//		{
//			break;
//		}
//	}
//	std::cout << max_day;
//	return 0;
//}

