#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		vector<long long> nums;
		for (long long i = 0; i < n; i++)
		{
			long long temp;
			cin >> temp;
			nums.push_back(temp);
		}
		sort(nums.begin(), nums.end());
		long long minNum = nums[0];
		cout << minNum * (n - 1) << endl;
	}
}
