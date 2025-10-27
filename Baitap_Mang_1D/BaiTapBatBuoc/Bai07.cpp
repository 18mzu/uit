#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int X = 12;
    bool first = true;
    for (int i = 0; i < a.size();)
    {
        if (a[i] == X && !first)
            a.erase(a.begin() + i);
        else
        {
            if (a[i] == X)
                first = false;
            i++;
        }
    }
    for (int v : a)
        cout << v << " ";
}