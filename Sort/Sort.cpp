#include "Sort.h"
#include <unordered_set>

void Sort::BubbleSort(std::vector<int>& nums)
{
	bool flag = true;
	//第一层循环是每一次排好一个
	for (int i = 0; i < nums.size() && flag; ++i)
	{
		flag = false;
		//第二层循环是将较小的向上移动
		for (int j = nums.size() - 1; j > i; --j)
		{
			if (nums[j] < nums[j - 1])
			{
				std::swap(nums[j], nums[j - 1]);
				flag = true;
			}
		}
	}
}

void Sort::SelectionSort(std::vector<int>& nums)
{
	for (int i = 0; i < nums.size(); ++i)
	{
		//寻找i之后最小的索引
		int min_index = i;
		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (nums[j] < nums[min_index])
			{
				min_index = j;
			}
		}
		//交换
		if (i != min_index)
		{
			std::swap(nums[i], nums[min_index]);
		}
	}
}

void Sort::InsertionSort(std::vector<int>& nums)
{
	for (int i = 1; i < nums.size(); ++i)
	{
		if (nums[i] < nums[i - 1])
		{
			//先保存第i项
			int tmp = nums[i];
			int j = 0;
			for (j = i - 1; j >= 0; --j)
			{
				//把大的往后移动
				if (nums[j] > tmp)
				{
					nums[j + 1] = nums[j];
				}
				else
				{
					break;
				}
			}
			//把新数插入
			nums[j + 1] = tmp;
		}
	}
}

void Sort::ShellSort(std::vector<int>& nums)
{
	int increase = nums.size();

	do
	{
		increase = increase / 3 + 1;
		for (int i = increase; i < nums.size(); ++i)
		{
			if (nums[i] < nums[i - increase])
			{
				int tmp = nums[i];
				//移动更大的数据
				int j = 0;
				for (j = i - increase; j >= 0 && tmp < nums[j]; j -= increase)
				{
					nums[j + increase] = nums[j];
				}
				//将要插入的数据插入
				nums[j + increase] = tmp;
			}
		}
	} while (increase > 1);
}

void Sort::MergeSort(std::vector<int>& nums)
{
	MergeSort(nums, nums, 0, nums.size() - 1);
}

void Sort::MergeSort(std::vector<int>& nums, std::vector<int>& t, int left, int right)
{
	//分到只有一个数时
	if (left == right)
	{
		t[left] = nums[left];
	}
	else
	{
		int middle = (left + right) / 2;
		//用于存储部分有序的数
		std::vector<int> tmp_array;
		tmp_array.resize(nums.size());
		//将nums[left ~ middle] 归并为有序的 tmp_array
		MergeSort(nums, tmp_array, left, middle);
		//将nums[middle + 1 ~ right] 归并为有序的 tmp_array
		MergeSort(nums, tmp_array, middle + 1, right);
		//将tmp_array的left ~ middle和middle + 1 ~ right两段归一到t
		Merge(tmp_array, t, left, middle, right);
	}
}

void Sort::Merge(std::vector<int>& nums, std::vector<int>& t, int left, int middle, int right)
{
	int j = middle + 1;
	int i = left;
	int index = left;
	while (i <= middle && j <= right)
	{
		if (nums[i] > nums[j])
		{
			t[index++] = nums[j++];
		}
		else
		{
			t[index++] = nums[i++];
		}
	}
	//把剩下的放到后面
	if (i <= middle)
	{
		while (i <= middle)
		{
			t[index++] = nums[i++];
		}
	}
	if (j <= right)
	{
		while (j <= right)
		{
			t[index++] = nums[j++];
		}
	}
}

void Sort::QuickSort(std::vector<int>& nums)
{
	QuickSort(nums, 0, nums.size() - 1);
}

void Sort::QuickSort(std::vector<int>& nums, int left, int right)
{
	if (left < right)
	{
		int pivot = Partition(nums, left, right);
		QuickSort(nums, left, pivot - 1);
		QuickSort(nums, pivot + 1, right);
	}
}

int Sort::Partition(std::vector<int>& nums, int left, int right)
{
	int pivotKey = nums[left];

	//双指针法从左右到中间
	while (left < right)
	{
		//把右面的小的换到左面，不考虑左面的数据，因为是锚点
		while (left < right && nums[right] >= pivotKey)
		{
			--right;
		}
		std::swap(nums[left], nums[right]);
		//把左面的大的换到右面，不考虑右面的数据，因为是刚刚被换过去的
		while (left < right && nums[left] <= pivotKey)
		{
			++left;
		}
		std::swap(nums[left], nums[right]);
	}
	return left;
}

void Sort::HeapSort(std::vector<int>& nums)
{
	//先把数组调整为大根堆
	for (int i = nums.size() / 2 - 1; i >= 0; --i)
	{
		HeapAdjust(nums, i, nums.size() - 1);
	}

	//把最大的交换到最后
	for (int i = nums.size() - 1; i >= 0; --i)
	{
		std::swap(nums[0], nums[i]);
		HeapAdjust(nums, 0, i - 1);
	}
}

void Sort::HeapAdjust(std::vector<int>& nums, int left, int right)
{
	int tmp = nums[left];
	for (int i = left * 2 + 1; i <= right; i *= 2 + 1)
	{
		//如果有右儿子而且右儿子大那么就右儿子备选
		if (i < right && nums[i] < nums[i + 1])
		{
			++i;
		}
		//根比儿子大那么就不换了
		if (tmp >= nums[i])
		{
			break;
		}
		nums[left] = nums[i];
		left = i;
	}
	nums[left] = tmp;
}

void Sort::CountingSort(std::vector<int>& nums)
{
}

void Sort::BucketSort(std::vector<int>& nums)
{
}

void Sort::RadixSort(std::vector<int>& nums)
{
}