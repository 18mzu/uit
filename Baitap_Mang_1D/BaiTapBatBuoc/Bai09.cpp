#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {9, 8, 11, 13, 10, 15, 14, 16, 20, 5};
    int n = a.size();

    vector<int> sub;
    sub.push_back(a[0]);

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            sub.push_back(a[i]);
        } else {
            if (sub.size() > 1) {
                for (int v : sub) cout << v << " ";
                cout << "\n";
            }
            sub.clear();
            sub.push_back(a[i]);
        }
    }

    if (sub.size() > 1) {
        for (int v : sub) cout << v << " ";
        cout << "\n";
    }

    return 0;
}
