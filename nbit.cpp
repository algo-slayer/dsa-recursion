#include <bits/stdc++.h>
using namespace std;

void nbit(int z, int o, string op, int n)
{
    if(n == 0)
    {
        cout << op << endl;
        return;
    }
    else if(z == o)
    {
        string op1=op+"1";
        nbit(z, o+1, op1, n-1);
    }
    else if(z < o)
    {
        string op1 = op + "0";
        string op2 = op + "1";
        nbit(z+1, o, op1, n-1);
        nbit(z, o+1, op2, n-1);
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int zero=0, one=0;

    nbit(zero, one, "", n);

    return 0;
}