#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int X = 12;

    auto it = find(a.rbegin(), a.rend(), X);
    cout << (it == a.rend() ? -1 : (int)(a.size() - 1 - (it - a.rbegin())));
}
