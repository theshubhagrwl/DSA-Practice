#include <bits/stdc++.h>

using namespace std;

#define ll long long

void max(vector<ll> s, vector<ll> p, vector<ll> v)
{
	ll max = 0;
	for (ll i = 0; i < s.size(); i++)
	{
		s[i]++;
		if (((p[i] / s[i]) * v[i]) > max)
			max = ((p[i] / s[i]) * v[i]);
	}
	cout << max << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, i = 0;
		cin >> n;
		vector<ll> s(n), p(n), v(n);
		while (n--)
		{
			cin >> s[i] >> p[i] >> v[i];
			i++;
		}
		max(s, p, v);
	}
	return 0;
}
