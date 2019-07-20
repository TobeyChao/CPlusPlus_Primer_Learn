#include "Sort.h"
#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{
	std::vector<int> nums{ 20, 35, 44, 29, 29, 56, 45, 74, 32, 51, 64, 57, 11, 2 };
	Sort sort;
	sort.MergeSort(nums);

	for (auto element : nums)
	{
		std::cout << element << " ";
	}
	system("pause");
	return 0;
}