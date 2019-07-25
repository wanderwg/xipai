#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int T, n, k;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		int num = 2 * n;
		vector<int> v(num);
		for (int i = 0; i < num; ++i)
		{
			cin >> v[i];
		}
		while (k--)
		{
			vector<int> tmp(v.begin(), v.end());
			for (int i = 0; i < n; ++i)
			{
				v[2 * i] = tmp[i];
				v[2 * i + 1] = tmp[i + n];
			}
		}
		for (int i = 0; i < num - 1; ++i)
		{
			cout << v[i] << " ";
		}
		cout << v[num - 1] << endl;
	}
	return 0;
}