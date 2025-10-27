#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto isPrime = [](int x)
    {
        if (x < 2)
            return false;
        for (int d = 2; d * d <= x; ++d)
            if (x % d == 0)
                return false;
        return true;
    };

    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};

    for (auto it = a.begin(); it != a.end(); ++it)
    {
        if (isPrime(*it))
        {
            it = a.insert(it + 1, 0);
            ++it;
        }
    }

    for (int v : a)
        cout << v << " ";
}
