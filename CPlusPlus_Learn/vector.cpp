#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> stringList;
	string str;
	while (cin >> str)
	{
		stringList.push_back(str);
	}
	return 0;
}