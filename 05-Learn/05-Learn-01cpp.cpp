#include <iostream>

int main()
{
	std::cout << "���������" << std::endl;
	int value;
	std::cin >> value;
	std::cout << "������ָ��" << std::endl;
	int pow;
	std::cin >> pow;
	int sum = 1;

	for (size_t i = 0; i < pow; i++)
	{
		sum *= value;
	}
	std::cout << value << "��" << pow << "�η���" << sum << std::endl;
	system("pause");
}