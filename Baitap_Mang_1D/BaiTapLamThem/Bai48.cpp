#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int k = 3;

    sort(a.begin(), a.end(), greater<int>());
    a.erase(unique(a.begin(), a.end()), a.end());

    if (k > a.size())
        cout << -1;
    else
        cout << a[k - 1];
}
