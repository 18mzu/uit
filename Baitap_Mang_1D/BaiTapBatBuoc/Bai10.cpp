#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    vector<int> b;
    for (int v : a)
    {
        if (v < 2)
            continue;
        bool ok = true;
        for (int i = 2; i * i <= v; i++)
            if (v % i == 0)
                ok = false;
        if (ok)
            b.push_back(v);
    }
    for (int v : b)
        cout << v << " ";
}
