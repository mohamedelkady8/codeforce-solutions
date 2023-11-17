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
     
 int x;
    cin >> x;
    int s = x - 1;
    int t = 1;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }

        for (int x = 1; x <= t; x++)
        {
            cout << "*";
        }

        s--;
        t += 2;
        cout << endl;
    }
    t -= 2;
    s++;
    for (int i = x; i >= 1; i--)
    {

        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }

        for (int x = 1; x <= t; x++)
        {
            cout << "*";
        }

        t -= 2;
        s++;
        cout << endl;
    }
}

int main()
{
    _kady(); _solve();
}