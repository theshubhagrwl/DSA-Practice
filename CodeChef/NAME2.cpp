#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PB push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string m, w;
        cin >> m >> w;
        if (m == w)
            cout << "YES" << endl;
        else if (m.length() > w.length())
        {
            int j = 0;
            int i = 0;
            while (i < m.length() && j < w.length())
            {
                if (w[j] == m[i])
                    j++;
                i++;
            }
            if (j == w.length())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else if (m.length() == w.length() && m != w)
            cout << "NO" << endl;
        else
        {
            int j = 0;
            int i = 0;
            while (i < w.length() && j < m.length())
            {
                if (m[j] == w[i])
                    j++;
                i++;
            }
            if (j == m.length())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
