#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    auto mid1 = stable_partition(a.begin(), a.end(),
                                 [](int v)
                                 { return v > 0; });

    auto mid2 = stable_partition(mid1, a.end(),
                                 [](int v)
                                 { return v < 0; });

    sort(a.begin(), mid1, greater<int>());

    sort(mid1, mid2);

    for (int v : a)
        cout << v << " ";
}
