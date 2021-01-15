#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        vector<ll> v(n);
        ll dang = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= 9 || v[i] >= 80)
                dang++;
        }
        ll ans = 0;
        if (dang > 0)
        {
            if (dang >= d)
                ans += (dang / d + (dang % d != 0));
            else
                ans++;
            // ans += (d / dang + (d % dang != 0));
            n -= dang;
        }
        ans += (n / d + (n % d != 0));
        cout << ans << endl;
    }
}