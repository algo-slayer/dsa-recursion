#include <bits/stdc++.h>
using namespace std;

void printSubset(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    string op1=op;
    string op2=op+ip[0];

    ip=ip.substr(1);

    printSubset(ip, op1);
    printSubset(ip, op2);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;

    printSubset(s, "");

    return 0;
}