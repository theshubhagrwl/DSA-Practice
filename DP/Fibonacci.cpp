#include <iostream>
// #include <vector>

using namespace std;

int fibWithoutDP(int n)
{
    if (n <= 2)
        return 1;
    return fibWithoutDP(n - 1) + fibWithoutDP(n - 2);
}

int fib(int n, int *memo)
{
    if (memo[n] != -1)
        return memo[n];
    if (n <= 1)
        memo[n] = n;
    else
        memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main()
{
    int n = 80;
    int memo[n + 1];
    for (int i = 0; i <= n; i++)
        memo[i] = -1;
    cout << fib(n, memo) << endl;
    cout << fibWithoutDP(n) << endl;
}