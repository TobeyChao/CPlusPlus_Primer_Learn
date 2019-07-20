#include "Sort.h"
#include <unordered_set>

void Sort::BubbleSort(std::vector<int>& nums)
{
	bool flag = true;
	//��һ��ѭ����ÿһ���ź�һ��
	for (int i = 0; i < nums.size() && flag; ++i)
	{
		flag = false;
		//�ڶ���ѭ���ǽ���С�������ƶ�
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
		//Ѱ��i֮����С������
		int min_index = i;
		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (nums[j] < nums[min_index])
			{
				min_index = j;
			}
		}
		//����
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
			//�ȱ����i��
			int tmp = nums[i];
			int j = 0;
			for (j = i - 1; j >= 0; --j)
			{
				//�Ѵ�������ƶ�
				if (nums[j] > tmp)
				{
					nums[j + 1] = nums[j];
				}
				else
				{
					break;
				}
			}
			//����������
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
				//�ƶ����������
				int j = 0;
				for (j = i - increase; j >= 0 && tmp < nums[j]; j -= increase)
				{
					nums[j + increase] = nums[j];
				}
				//��Ҫ��������ݲ���
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
	//�ֵ�ֻ��һ����ʱ
	if (left == right)
	{
		t[left] = nums[left];
	}
	else
	{
		int middle = (left + right) / 2;
		//���ڴ洢�����������
		std::vector<int> tmp_array;
		tmp_array.resize(nums.size());
		//��nums[left ~ middle] �鲢Ϊ����� tmp_array
		MergeSort(nums, tmp_array, left, middle);
		//��nums[middle + 1 ~ right] �鲢Ϊ����� tmp_array
		MergeSort(nums, tmp_array, middle + 1, right);
		//��tmp_array��left ~ middle��middle + 1 ~ right���ι�һ��t
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
	//��ʣ�µķŵ�����
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

	//˫ָ�뷨�����ҵ��м�
	while (left < right)
	{
		//�������С�Ļ������棬��������������ݣ���Ϊ��ê��
		while (left < right && nums[right] >= pivotKey)
		{
			--right;
		}
		std::swap(nums[left], nums[right]);
		//������Ĵ�Ļ������棬��������������ݣ���Ϊ�Ǹոձ�����ȥ��
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
	//�Ȱ��������Ϊ�����
	for (int i = nums.size() / 2 - 1; i >= 0; --i)
	{
		HeapAdjust(nums, i, nums.size() - 1);
	}

	//�����Ľ��������
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
		//������Ҷ��Ӷ����Ҷ��Ӵ���ô���Ҷ��ӱ�ѡ
		if (i < right && nums[i] < nums[i + 1])
		{
			++i;
		}
		//���ȶ��Ӵ���ô�Ͳ�����
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