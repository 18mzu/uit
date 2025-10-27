#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    bool inc = true, dec = true;

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] < a[i - 1])
            inc = false;
        if (a[i] > a[i - 1])
            dec = false;
    }

    cout << ((inc || dec) ? 1 : 0);
}
