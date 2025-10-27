#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int vt = -1;
    for (int i = 0; i < a.size(); i++)
        if (a[i] < 0 && (vt == -1 || a[i] > a[vt]))
            vt = i;
    cout << vt;
}
