#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n,k,d;
		cin >> n >> k>> d;
		vector <ll> a(n);
		ll totalProblems = 0;	
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
			totalProblems+=a[i];
		}

        // ll reqProblems = k * d;
        ll count = 0;
		count = totalProblems /k;
		if(count > d)
			count =d;
		// totalProblems-=k;
        // while(totalProblems >= 0  && count < d )
        // {
        //     totalProblems-=k;
        //     count++;
        // }
        cout << count << endl;

	}
	return 0;
}
