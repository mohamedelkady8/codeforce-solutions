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
    string url ;
    cin >> url ;
    bool flag = false;
    for (ll i = 0; i < url.size(); i++)
    {
        if ((url[i] == '?' || url[i] == '&') && !flag)
        {
            flag = true;
            continue;
        }

        if (flag)
        {
            if (url[i] != '=' && url[i] != '&')
            {
                cout << url[i];
            }
            else if (url[i] == '=')
            {
                cout << ": ";
            }
            else if (url[i] == '&')
            {
                cout << endl;
            }
        }
    }
}
int main()
{
    _kady(); _solve();
}