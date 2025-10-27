#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    int mn = INT_MAX, mx = INT_MIN;
    for (int v : a)
        if (v > 0)
            mn = min(mn, v), mx = max(mx, v);

    cout << mn << " " << mx;
}
