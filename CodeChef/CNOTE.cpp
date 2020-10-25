#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll x, y, k, n;
		cin >> x >> y >> k >> n;
		vector<pair<int, int>> info;
		while (n--)
		{
			ll p, c;
			cin >> p >> c;
			info.push_back(make_pair(p, c));
		}
		bool flag = false;
		for (auto it : info)
		{
			if (it.first >= (x - y) && it.second <= k)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			cout << "LuckyChef" << endl;
		else
			cout << "UnluckyChef" << endl;
	}
}
