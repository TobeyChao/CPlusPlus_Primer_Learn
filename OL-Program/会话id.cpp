//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//struct node
//{
//	int count;
//	vector<int> nums;
//};
//
//int main()
//{
//	int num_group;
//	cin >> num_group;
//	vector<node> nodes;
//	for (int i = 0; i < num_group; ++i)
//	{
//		node tmp_node;
//		cin >> tmp_node.count;
//		for (int j = 0; j < tmp_node.count; ++j)
//		{
//			int tmp = 0;
//			cin >> tmp;
//			tmp_node.nums.push_back(tmp);
//		}
//		nodes.push_back(tmp_node);
//	}
//	for (int i = 0; i < num_group; ++i)
//	{
//		set<int> nums_pass;
//		for (auto it = nodes[i].nums.rbegin(); it != nodes[i].nums.rend(); ++it)
//		{
//			if (nums_pass.find(*it) == nums_pass.end())
//			{
//				cout << *it;
//				if (it + 1 != nodes[i].nums.rend())
//				{
//					cout << " ";
//				}
//				nums_pass.insert(*it);
//			}
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}