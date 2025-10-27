
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1}, b;
    int X = 5;
    for (int v : a)
        if (v >= X)
            b.push_back(v);
    if (b.empty())
        cout << -1;
    else
        for (int v : b)
            cout << v << " ";
}