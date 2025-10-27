#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X = 12;
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    a.erase(remove(a.begin(), a.end(), X), a.end());

    if (a.empty())
        cout << -1;
    else
        for (int v : a)
            cout << v << " ";
}
