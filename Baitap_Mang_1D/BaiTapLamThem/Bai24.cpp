
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int X = 7, pos = max_element(a.begin(), a.end()) - a.begin();
    a.insert(a.begin() + pos + 1, X);
    for (int v : a)
        cout << v << " ";
}