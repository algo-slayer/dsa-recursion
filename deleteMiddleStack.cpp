#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &s, int n, int c)
{
    if(s.empty() || c == n)
    return;

    int x = s.top();
    s.pop();

    deleteMiddle(s, n, c+1);

    if(c != (n/2))
    s.push(x);
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

    int *arr=(int*)malloc(n*sizeof(int));

    stack <int> s;

    cin >> n;
    for(int i=0;i < n;i++)
    {
        cin >> arr[i];
        s.push(arr[i]);
    }

    deleteMiddle(s, n, 0);

    while(s.empty() == false)
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}