#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> horses;
		while (n--)
		{
			ll temp;
			cin >> temp;
			horses.push_back(temp);
		}
		sort(horses.begin(), horses.end());
		int min = horses[1] - horses[0];
		for (int i = 0; i < horses.size(); i++)
		{
			if (abs((horses[i + 1] - horses[i])) < min)
				min = abs(horses[i + 1] - horses[i]);
		}
		cout << min << endl;
	}
}
