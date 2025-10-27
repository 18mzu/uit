
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X = 10;
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    sort(a.begin(), a.end());
    a.insert(lower_bound(a.begin(), a.end(), X), X);
    for (int v : a)
        cout << v << " ";
}