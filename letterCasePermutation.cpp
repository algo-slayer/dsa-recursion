#include <bits/stdc++.h>
#include <iterator>
#include <string>
using namespace std;

void letterCasePermutation(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout << op << endl;
        return; 
    }

    char ch = ip[0];

    if(!isdigit(ch))
    {
        if(isupper(ch))
        ch = tolower(ch);
        else
        ch = toupper(ch);
    }

    if(isdigit(ch))
    {
        op = op + ch;
        letterCasePermutation(ip.substr(1), op);
    }
    else
    {
        string op1 = op + ip[0];
        string op2 = op + ch;

        letterCasePermutation(ip.substr(1), op1);
        letterCasePermutation(ip.substr(1), op2);
    }
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

    letterCasePermutation(s, "");

    return 0;
}