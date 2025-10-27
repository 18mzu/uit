#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    vector<int> e, o;

    for(int v : a)
        (v & 1 ? o : e).push_back(v);

    for(int v : e) cout << v << " ";
    for(int v : o) cout << v << " ";
}
