#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    long long s = 0;
    for(int i = 0; i < a.size(); i += 2)
        s += a[i];

    cout << s;
}
