#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    unordered_map <int, int> cnt;
    for (int v : a)
        cnt[v]++;
    int val = a[0], best = cnt[a[0]];
    for (int i = 1; i < a.size(); i++)
        if (cnt[a[i]] > best)
            best = cnt[a[i]], val = a[i];
    cout << val;
}
