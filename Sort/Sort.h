#pragma once
#include <vector>

class Sort
{
public:
	void BubbleSort(std::vector<int> & nums);
	void SelectionSort(std::vector<int> & nums);
	void InsertionSort(std::vector<int> & nums);
	void ShellSort(std::vector<int> & nums);
	void MergeSort(std::vector<int> & nums);
	void MergeSort(std::vector<int> & nums, std::vector<int> & t, int left, int right);
	void Merge(std::vector<int> & nums, std::vector<int> & t, int left, int middle, int right);
	void QuickSort(std::vector<int> & nums);
	void QuickSort(std::vector<int> & nums, int left, int right);
	int Partition(std::vector<int> & nums, int left, int right);
	void HeapSort(std::vector<int> & nums);
	void HeapAdjust(std::vector<int> & nums, int left, int right);
	void CountingSort(std::vector<int> & nums);
	void BucketSort(std::vector<int> & nums);
	void RadixSort(std::vector<int> & nums);
};