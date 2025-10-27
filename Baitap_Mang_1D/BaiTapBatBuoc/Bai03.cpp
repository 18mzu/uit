#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {5, -3, 12, 0, 7, -11, 12, 2, 9, 20, -1};
    int k = 3;
    if(k>=0 && k<a.size()) a.erase(a.begin()+k);
    for(int v:a) cout << v << " ";
}
