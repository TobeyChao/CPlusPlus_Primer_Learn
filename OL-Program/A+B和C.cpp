#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int count_group;
	cin >> count_group;
	vector<vector<long long>> group;
	for (int i = 0; i < count_group; i++)
	{
		vector<long long> tmp;
		int a, b, c;
		cin >> a >> b >> c;
		tmp.push_back(a);
		tmp.push_back(b);
		tmp.push_back(c);
		group.push_back(tmp);
	}
	for (size_t i = 0; i < count_group; i++)
	{
		if (group[i][0] + group[i][1] > group[i][2])
		{
			cout << "Case #" + to_string(i + 1) + ": true" << endl;
		}
		else
		{
			cout << "Case #" + to_string(i + 1) + ": false" << endl;
		}
	}
	return 0;
}