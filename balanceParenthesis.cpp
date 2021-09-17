#include <bits/stdc++.h>
using namespace std;

vector <string> v;

void parenthesisBalance(int open, int close, string op)
{
    if(open == 0 && close == 0)
    {
        cout << op << endl;
        return;
    }
    else if(open == 0)
    {
        op=op+")";
        parenthesisBalance(open, close-1, op);
    }
    else if(open == close)
    {
        op=op+"(";
        parenthesisBalance(open-1, close, op);
    }
    else if(open < close)
    {
        string op1=op+"(";
        string op2=op+")";
        parenthesisBalance(open-1, close, op1);
        parenthesisBalance(open, close-1, op2);
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

    int open = n, close = n;

    parenthesisBalance(open,close,"");

    return 0;
}