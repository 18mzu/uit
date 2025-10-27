#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    vector<int> b, c;
    for (int v : a)
        (v > 0 ? b : c).push_back(v);
    for (int v : b)
        cout << v << " ";
    cout << "\n";
    for (int v : c)
        cout << v << " ";
}
