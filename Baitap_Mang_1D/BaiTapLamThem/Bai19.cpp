#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    vector<int> b;
    for (int i = 0; i < (int)a.size(); i += 2)
        b.push_back(a[i]);

    if (b.empty()) cout << -1;
    else for (int v : b) cout << v << " ";
}
