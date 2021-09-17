#include <bits/stdc++.h>
using namespace std;

int josepheus(int n,int index, int k, vector <int> &v)
{
    if(n == 1)
    return v[0];

    index = (index + k) % n;
    v.erase(v.begin() + index);

    return josepheus(n-1, index, k, v);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,k;
    cin >> n >> k;

    vector <int> v;

    for(int i=1;i <= n;i++)
    v.push_back(i);

    int ans = josepheus(n,0, k-1, v);

    cout << ans << endl;

    return 0;
}