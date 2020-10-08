#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, k;
		vector<long long> q;
		cin >> n >> k;
		for (int long long i = 0; i < n; i++)
		{
			long long temp;
			cin >> temp;
			q.push_back(temp);
		}

		long long qLeft;
		bool flag = false;
		long long count = 0;
		int ans = 0;
		for (long long i = 0; i < q.size(); i++)
		{
			qLeft = q[i] - k;
			if (qLeft < 0)
			{
				// cout << i << endl;
				ans = i + 1;
				flag = true;
				break;
			}

			if (i + 1 < q.size())
			{
				q[i + 1] += qLeft;
			}
			// if (!flag)
			// {
			// 	// ans = q[i] + 1;
			// 	ans = (q[i] / k) + 1;
			// }
		}
		if (!flag)
		{
			count += q.size();
			count = count + (qLeft / k);
			qLeft /= k;
			cout << count + 1 << endl;
		}
		else
		{
			cout << ans << endl;
		}

		// cout << ans << endl;

		// for (auto it : q)
		// {
		// 	cout << it << " ";
		// }
	}
}
