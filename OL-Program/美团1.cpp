#include "header.h"

int fun()
{
	int n;
	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int sum = 1;
	int lastNum = v[0];
	for (int i = 1; i < n; i++)
	{
		if (v[i] - lastNum > 1)
		{
			++sum;
			lastNum = v[i];
		}
	}

	return sum;
}