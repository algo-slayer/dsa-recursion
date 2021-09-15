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

void permutationCaseChange(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    char ch = toupper(ip[0]);
    string op1 = op + ch;
    string op2 = op + ip[0];

    ip=ip.substr(1);

    permutationCaseChange(ip, op1);
    permutationCaseChange(ip, op2);
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

    permutationCaseChange(s, "");

    return 0;
}