#include <iostream>
using namespace std;

int main()
{
    int d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    int ans = 0;
    int sum = 0;

    while (sum < p)
    {
        ans++;
        if (ans >= d1)
            sum += v1;
        if (ans >= d2)
            sum += v2;
    }

    cout << ans << endl;
}