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
     string x;
     cin >> x;
    sort(x.begin(), x.end());
    ll s = x.size();
    for (int i = 0; i < s; i++)
    {
        char y = x[i];
        int counter = 1;
        while (x[i] == x[i + 1])
        {
            counter++;
            i++;
        }

        cout << y << " : " << counter << endl;
    }
}
int main()
{
    _kady(); _solve();
}