#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    bool ok = true;
    for (int i = 0, j = a.size() - 1; i < j; i++, j--)
        if (a[i] != a[j])
            ok = false;
    cout << (ok ? "co doi xung" : "khong doi xung");
}
