
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    long long se = 0, so = 0;
    for (int v : a)
        if ((v & 1) == 0)
            se += v;
        else
            so += v;
    cout << se << " " << so;
}