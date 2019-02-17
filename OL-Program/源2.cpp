//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int find_max_index(vector<int>& vec, int index)
//{
//	vector<int> sorted = vec;
//	std::sort(sorted.begin(), sorted.end());
//	for (size_t i = 0; i < vec.size(); i++)
//	{
//		if (vec[i] == sorted[sorted.size() - index])
//		{
//			return (int)i;
//		}
//	}
//}
//
//void update_min_max_index(int num_distance, vector<int> found_index, int &min, int &max)
//{
//	int min_index = found_index[0];
//	int max_index = found_index[0];
//	for (size_t i = 0; i < found_index.size(); i++)
//	{
//		if (min_index > found_index[i])
//		{
//			min_index = found_index[i];
//		}
//		if (max_index < found_index[i])
//		{
//			max_index = found_index[i];
//		}
//	}
//	min = min_index - num_distance;
//	max = max_index + num_distance;
//}
//
//int find_max_index(vector<int>& vec, vector<bool>& isvisit, int min_pos, int max_pos)
//{
//	int max = 0;
//	//��pos��ʼ��min~max��Χ��Ѱ��û��Ѱ�ҹ������ֵ
//	for (int i = min_pos; i <= max_pos && i < vec.size(); i++)
//	{
//		if (vec[i] > max && !isvisit[i])
//		{
//			max = i;
//		}
//	}
//	for (int i = min_pos; i >= min_pos && i >= 0; i--)
//	{
//		if (vec[i] > max && !isvisit[i])
//		{
//			max = i;
//		}
//	}
//	isvisit[max] = true;
//	return max;
//}
//
//int main()
//{
//	int num_stu;
//	cin >> num_stu;
//	vector<int> skill_val;
//	//Ϊѧ��������ֵ
//	for (int i = 0; i < num_stu; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		skill_val.push_back(tmp);
//	}
//	int num_sel_stu;
//	cin >> num_sel_stu;
//	int num_distance;
//	cin >> num_distance;
//
//	int sum = -6000000;
//	int index_max = 1;
//	while (true)
//	{
//		//�Ѿ��ҵ����±�
//		vector<int> found_index;
//		//�Ƿ���
//		vector<bool> isvisit(num_stu, false);
//
//		int min_find_index = 0;
//		int max_find_index = num_stu;
//
//		//ѡ���index_max��������±���Ϊ��׼
//		int index_begin = find_max_index(skill_val, index_max);
//		isvisit[index_begin] = true;
//		found_index.push_back(index_begin);
//		update_min_max_index(num_distance, found_index, min_find_index, max_find_index);
//
//		int k = 1;
//		while (k < num_sel_stu)
//		{
//			int index = find_max_index(skill_val,
//				isvisit, min_find_index, max_find_index);
//			found_index.push_back(index);
//			update_min_max_index(num_distance, found_index, min_find_index, max_find_index);
//			k++;
//		}
//		//5 7 8 1 0 6 9 4 2 0
//		int tmp_sum = 1;
//		for (int i : found_index)
//		{
//			tmp_sum *= skill_val[i];
//		}
//		//�滻����
//		if (tmp_sum > sum)
//		{
//			sum = tmp_sum;
//		}
//		//ѡ����һ������Ϊ��׼
//		index_max++;
//
//		//����Ѿ�û�ˣ����
//		if (index_max > num_stu)
//		{
//			std::cout << sum << endl;
//			break;
//		}
//	}
//	
//	system("pause");
//	return 0;
//}