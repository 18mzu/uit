#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int X = 6;

    int idx = 0;
    int best = abs(a[0] - X);

    for (int i = 1; i < a.size(); i++) {
        int d = abs(a[i] - X);
        if (d < best) best = d, idx = i;
    }

    a.erase(a.begin() + idx);

    for (int v : a) cout << v << " ";
}
