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
    ll counter = 0 ;
    getline (cin , x) ;
     for (int i = 0; i < x.size(); i++)
    {
        if ( (x[i] >= 97 && x[i] <= 122) || (x[i] >= 65 && x[i] <= 90) )
        {
            if (x[i + 1] == ' ' || x[i + 1] == '!' || x[i + 1] == '?' || x[i + 1] == '.' || x[i + 1] == ',')
            {
                counter++;
            }
            else if (i == x.size() - 1)
            {
                counter++;
            }
        }
    }
    cout << counter;
}
int main()
{
    _kady(); _solve();
}