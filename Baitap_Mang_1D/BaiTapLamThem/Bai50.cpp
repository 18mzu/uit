#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int cnt = 0, len = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > a[i - 1])
            len++;
        else
        {
            cnt += len * (len - 1) / 2;
            len = 1;
        }
    }
    cnt += len * (len - 1) / 2;
    cout << cnt;
}
