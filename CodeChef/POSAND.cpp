#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool isPowerOfTwo(int x)
{
	if (x == 1)
		return false;
	return x && (!(x & (x - 1)));
}

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;

		vector<ll> ans;

		if (isPowerOfTwo(n))
		{
			cout << "-1" << endl;
		}
		else
		{
			if (n == 1)
				ans.push_back(1);
			else if (n == 3)
			{
				ans.push_back(2);
				ans.push_back(3);
				ans.push_back(1);
			}
			else
			{
				ans.push_back(2);
				ans.push_back(3);
				ans.push_back(1);

				for (ll i = 4; i <= n; i++)
				{
					if (isPowerOfTwo(i) && (i + 1 <= n))
					{
						ans.push_back(i + 1);
						ans.push_back(i);
						i++;
					}
					else
						ans.push_back(i);
				}
			}

			for (auto it : ans)
				cout << it << " ";
			cout << endl;
		}
	}
}
