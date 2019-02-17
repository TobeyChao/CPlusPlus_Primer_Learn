#include <iostream>

int main()
{
	std::cout << "请输入底数" << std::endl;
	int value;
	std::cin >> value;
	std::cout << "请输入指数" << std::endl;
	int pow;
	std::cin >> pow;
	int sum = 1;

	for (size_t i = 0; i < pow; i++)
	{
		sum *= value;
	}
	std::cout << value << "的" << pow << "次方是" << sum << std::endl;
	system("pause");
}