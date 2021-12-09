#pragma once
#include <vector>

class Sort
{
public:
	// √∞≈›≈≈–Ú
	void BubbleSort(std::vector<int>& nums);
	// —°‘Ò≈≈–Ú
	void SelectionSort(std::vector<int>& nums);
	// ≤Â»Î≈≈–Ú
	void InsertionSort(std::vector<int>& nums);
	// œ£∂˚≈≈–Ú
	void ShellSort(std::vector<int>& nums);
	// πÈ≤¢≈≈–Ú
	void MergeSort(std::vector<int>& nums);
	// øÏÀŸ≈≈–Ú
	void QuickSort(std::vector<int>& nums);
	// ∂—≈≈–Ú
	void HeapSort(std::vector<int>& nums);
	// º∆ ˝≈≈–Ú
	void CountingSort(std::vector<int>& nums);
	// Õ∞≈≈–Ú
	void BucketSort(std::vector<int>& nums);
	// ª˘ ˝≈≈–Ú
	void RadixSort(std::vector<int>& nums);
private:
	void MergeSort(std::vector<int>& nums, std::vector<int>& t, int left, int right);
	void Merge(std::vector<int>& nums, std::vector<int>& t, int left, int middle, int right);

	void QuickSort(std::vector<int>& nums, int left, int right);
	int Partition(std::vector<int>& nums, int left, int right);

	void HeapAdjust(std::vector<int>& nums, int left, int right);
};