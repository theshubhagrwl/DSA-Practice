#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll n, m;
	cin >> n >> m;
	ll ans = n - m;
	if (ans % 10 == 9)
	{
		ans--;
	}
	else
		ans++;
	cout << ans << endl;
}
