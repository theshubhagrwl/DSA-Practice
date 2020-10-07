#include <bits/stdc++.h>

using namespace std;

bool ispresent(vector<int> v, int temp)
{
	for (auto it : v)
	{
		if (it == temp)
			return true;
	}
	return false;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, x, y;
		cin >> n >> k >> x >> y;
		// x--;
		// y--;
		if (x == y)
		{
			cout << "YES" << endl;
		}
		else
		{
			vector<int> visited;
			int temp = (x + k) % n;
			x = temp;
			bool flag = true;
			while (y != temp)
			{
				visited.push_back(temp);
				temp = (x + k) % n;
				x = temp;
				if (ispresent(visited, temp))
				{
					flag = false;
					break;
				}
				// cout << temp << " ";
				flag = true;
			}
			if (flag)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}
