#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int pos = max_element(a.begin(), a.end()) - a.begin();
    cout << pos;
}
