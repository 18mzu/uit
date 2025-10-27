#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int X = -100;

    for (auto it = a.begin(); it != a.end(); ++it)
        if (!(*it & 1))
        {
            it = a.insert(it + 1, X);
            ++it;
        }

    for (int v : a)
        cout << v << " ";
}
