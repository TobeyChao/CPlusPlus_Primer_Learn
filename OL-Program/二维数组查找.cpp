//#include <vector>
//
//class Solution {
//public:
//	bool Find(int target, std::vector<std::vector<int> > array) {
//		if (array.empty())
//		{
//			return false;
//		}
//		int num_cols = array[0].size(); //列数
//		if (num_cols == 0)
//		{
//			return false;
//		}
//		int num_rows = array.size();    //行数
//
//		int col = num_rows - 1;
//		int row = 0;
//		bool found = false;
//		while (col >= 0 && row <= num_rows - 1)
//		{
//			if (array[row][col] == target)
//			{
//				found = true;
//				break;
//			}
//			else if (array[row][col] > target)
//			{
//				--col;
//			}
//			else
//			{
//				++row;
//			}
//		}
//		return found;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	std::vector<std::vector<int> > array;
//	array.push_back({ 1, 2, 3, 4 });
//	array.push_back({ 5, 6, 7, 8 });
//	array.push_back({ 9, 10, 11, 12 });
//	array.push_back({ 13, 14, 15, 16 });
//	bool b = solution.Find(14, array);
//	return 0;
//}