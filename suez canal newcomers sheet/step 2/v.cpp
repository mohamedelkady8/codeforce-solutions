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
    string x ; 
    string z;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        if ((x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= 'a' && x[i] <= 'z')) 
        {
            if (x[i]>= 'A' && x[i] <= 'Z')
                {
                    x[i] = x[i] + 32;
                }
            else if (x[i] >= 'a' && x[i] <= 'z')
                {
                    x[i] = x[i] - 32;
                }
        }
        if (x[i] == 44)
        {
            x[i] = x[i] - 12 ;
        }
        
    }
    cout << x ;
}
int main()
{
    _kady(); _solve();
}