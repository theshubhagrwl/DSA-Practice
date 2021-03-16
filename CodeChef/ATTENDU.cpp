#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        string str;
        cin >> str;

        map<char, int> myMap;

        for (int i = 0; i < n; i++)
        {
            myMap[str[i]]++;
        }

        int daysPresent = myMap['1'];

        float currentPercent = (float(daysPresent + 120 - n) / 120);
        if (currentPercent >= 0.75)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        // for (auto x : myMap)
        //     cout
        //         << x.first << " " << x.second << endl;
    }
}
