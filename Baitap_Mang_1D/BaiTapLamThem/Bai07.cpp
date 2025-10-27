#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    auto isPrime = [](int x) {
        if (x < 2) return false;
        for (int d = 2; d * d <= x; ++d)
            if (x % d == 0) return false;
        return true;
    };

    auto it = find_if(a.begin(), a.end(), isPrime);
    cout << (it == a.end() ? -1 : (int)(it - a.begin()));
}
