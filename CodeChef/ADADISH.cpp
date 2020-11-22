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
        vector<int> time;
        while (n--)
        {
            int temp;
            cin >> temp;
            time.push_back(temp);
        }

        int b1 = 0, b2 = 0;
        sort(time.begin(), time.end(), greater<int>());
        for (int i = 0; i < time.size(); i++)
        {
            b1 <= b2 ? b1 += time[i] : b2 += time[i];
        }
        cout << max(b1, b2) << endl;
    }
    return 0;
}
