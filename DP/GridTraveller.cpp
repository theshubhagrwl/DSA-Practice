#include <iostream>

using namespace std;

long long int gridTraveller(long long int n, long long int m, long long int memo[][20])
{
    if (memo[n][m] != -1)
        return memo[n][m];
    if (n == 1 && m == 1)
        return 1;
    if (n == 0 || m == 0)
        return 0;
    memo[n][m] = gridTraveller(n - 1, m, memo) + gridTraveller(n, m - 1, memo);
    return memo[n][m];
}

int main()
{
    long long int n = 20;
    long long int m = 20;
    long long int memo[n][20];
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j < m; j++)
        {
            memo[i][j] = -1;
        }
    }

    cout << gridTraveller(2, 3, memo) << endl;
    cout << gridTraveller(5, 5, memo) << endl;
    cout << gridTraveller(18, 18, memo) << endl;
}