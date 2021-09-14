#include <bits/stdc++.h>
using namespace std;

void insertElement(stack <int> &s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int y=s.top();
    s.pop();

    insertElement(s, x);

    s.push(y);
}

void reverseStack(stack<int> &s)
{
    if(s.empty())
    return;

    int x = s.top();
    s.pop();

    reverseStack(s);

    insertElement(s, x);
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

    reverseStack(s);

    while(s.empty() == false)
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}