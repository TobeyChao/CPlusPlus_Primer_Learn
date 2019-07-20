//#include <string>
//#include <vector>
//#include <map>
//
//class Solution
//{
//public:
//	std::vector<std::string> letterCombinations(std::string digits)
//	{
//		std::map<char, std::string> num_map;
//		num_map['2'] = "abc";
//		num_map['3'] = "def";
//		num_map['4'] = "ghi";
//		num_map['5'] = "jkl";
//		num_map['6'] = "mno";
//		num_map['7'] = "pqrs";
//		num_map['8'] = "tuv";
//		num_map['9'] = "wxyz";
//		if (digits.empty())
//		{
//			return std::vector<std::string>();
//		}
//
//		std::vector<std::string> origin;
//		for (auto element : digits)
//		{
//			origin.push_back(num_map[element]);
//		}
//		std::vector<std::string> res;
//		GetStrings(origin, res, "", 0);
//		return res;
//	}
//
//	void GetStrings(std::vector<std::string>& origin, std::vector<std::string>& res,  std::string str , int num_index)
//	{
//		if (num_index <= origin.size() - 1)
//		{
//			for (auto element : origin[num_index])
//			{
//				str += element;
//				GetStrings(origin, res, str, num_index + 1);
//				str.pop_back();
//			}
//		}
//		else
//		{
//			res.push_back(str);
//		}
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	solution.letterCombinations("23");
//}