#include <bits/stdc++.h>
using namespace std;
#define ll long long

void _kady()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}
void _solve()
{
    ll size, t;
    cin >> size >> t ; 
    string x;
    cin >> x;
    while (t--)
    {
        string y;
        cin >> y;
        ll a, b;
        if (y == "pop_back")
        {
            x.pop_back();
        }
        else if (y == "front")
        {
            cout << x.front() << endl;
        }
        else if (y == "back")
        {
            cout << x.back() << endl;
        }
        else if (y == "sort")
        {

            cin >> a >> b ;
            sort(&x[min(a, b) - 1], &x[max(a, b)]);
        }
        else if (y == "reverse")
        {
            cin >> a >> b;
            reverse(&x[min(a, b) - 1], &x[max(a, b)]);
        }
        else if (y == "print")
        {
            int pos;
            cin >> pos;
            cout << x[pos - 1] << endl;
        }
        else if (y == "substr")
        {
            cin >> a >> b;
            for (int i = min(a, b) - 1; i < max(a, b); i++)
            {
                cout << x[i];
            }
            cout << endl;
        }
        else if (y == "push_back")
        {
            char c;
            cin >> c;
            x.push_back(c);
        }
    }         
}
int main()
{
    _kady(); _solve();
}