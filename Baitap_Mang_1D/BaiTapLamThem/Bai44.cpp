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
    vector<int> b;
    copy_if(a.begin(), a.end(), back_inserter(b), isPrime);

    if (b.empty())
        cout << -1;
    else
        for (int v : b)
            cout << v << " ";
}
