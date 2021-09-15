#include <bits/stdc++.h>
#include <iterator>
#include <string>
using namespace std;

set <string> s;

string trim(const string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

void permutationSpaces(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    string op1=op+ip[0];
    string op2=op+" "+ip[0];

    ip=ip.substr(1);

    permutationSpaces(ip, op1);
    permutationSpaces(ip, op2);
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

    permutationSpaces(s.substr(1), s.substr(0,1));

    return 0;
}