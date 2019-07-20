#include <string>
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	std::string str;
	std::cin >> str;
	int count = 1;
	float sum = str.size();
	for (int i = 0; i < str.size() - 1; ++i)
	{
		
		if (str[i] != str[i + 1])
		{
			++count;
		}
	}
	std::cout << std::setprecision(3) << sum / count;

	return 0;
}
