#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{10, 40, 20, 40, 20};

    unordered_set<int> hashSet;

    for (auto it : nums)
    {
        if (hashSet.count(it) > 0)
        {
            cout << it << " is duplicate" << endl;
            // break;
        }
        hashSet.insert(it);
    }
}
