#include <bits/stdc++.h>
using namespace std;

void insertSort(stack<int> &s, int ele)
{
    if(s.empty() || ele > s.top())
    {
        s.push(ele);
        return;
    }

    int top = s.top();
    s.pop();

    insertSort(s, ele);

    s.push(top);
}

void sort(stack <int> &s)
{
    if(s.empty())
    return;

    int x = s.top();
    s.pop();

    sort(s);

    insertSort(s, x);
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

    sort(s);

    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}