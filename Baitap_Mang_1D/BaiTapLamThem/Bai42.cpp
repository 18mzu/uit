#include <bits/stdc++.h>
using namespace std;
// ptu cực đại là ptu lớn hơn cả 2 ptu kề nó
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    long long s = 0;
    for (int i = 1; i + 1 < a.size(); i++)
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            s += a[i];

    cout << s;
}
