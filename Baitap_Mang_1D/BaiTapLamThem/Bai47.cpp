#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, 7, 9};
    vector<int> b = {1, 2, 3};

    b.insert(b.end(), a.begin(), a.end());

    for(int v : b) cout << v << " ";
}
