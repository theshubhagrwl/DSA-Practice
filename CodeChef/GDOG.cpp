#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		vector<long long> noc;
		for (int i = 1; i <= k; i++)
		{
			noc.push_back(n % i);
		}
		long long max = *max_element(noc.begin(), noc.end());
		cout << max << endl;
	}
}
