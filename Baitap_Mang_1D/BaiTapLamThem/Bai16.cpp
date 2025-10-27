#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    auto mid = stable_partition(a.begin(), a.end(),
                                [](int v){return !(v & 1);} );
    /*[12, 0, 12, 2] | [5, -3, 7, -11, 9]
                    ↑
                    mid                     */
    sort(a.begin(), mid, greater<int>());

    for(int v : a) cout << v << " ";
}
