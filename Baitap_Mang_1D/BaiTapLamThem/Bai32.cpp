#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    bool even = all_of(a.begin(), a.end(), [](int v){ return !(v & 1); });
    bool odd  = all_of(a.begin(), a.end(), [](int v){ return  (v & 1); });

    cout << (even || odd ? 1 : 0);
}
