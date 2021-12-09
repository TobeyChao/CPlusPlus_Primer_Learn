#pragma once
#include <vector>

class Sort
{
public:
	// ð������
	void BubbleSort(std::vector<int>& nums);
	// ѡ������
	void SelectionSort(std::vector<int>& nums);
	// ��������
	void InsertionSort(std::vector<int>& nums);
	// ϣ������
	void ShellSort(std::vector<int>& nums);
	// �鲢����
	void MergeSort(std::vector<int>& nums);
	// ��������
	void QuickSort(std::vector<int>& nums);
	// ������
	void HeapSort(std::vector<int>& nums);
	// ��������
	void CountingSort(std::vector<int>& nums);
	// Ͱ����
	void BucketSort(std::vector<int>& nums);
	// ��������
	void RadixSort(std::vector<int>& nums);
private:
	void MergeSort(std::vector<int>& nums, std::vector<int>& t, int left, int right);
	void Merge(std::vector<int>& nums, std::vector<int>& t, int left, int middle, int right);

	void QuickSort(std::vector<int>& nums, int left, int right);
	int Partition(std::vector<int>& nums, int left, int right);

	void HeapAdjust(std::vector<int>& nums, int left, int right);
};