#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> B = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    vector<int> A = {12, 0, 7};

    bool ok = false;
    int n = B.size(), m = A.size();

    for(int i = 0; i + m <= n; ++i) {
        bool match = true;
        for(int j = 0; j < m; ++j) {
            if(B[i + j] != A[j]) {
                match = false;
                break;
            }
        }
        if(match) {
            ok = true;
            break;
        }
    }

    cout << (ok ? 1 : 0);
}
