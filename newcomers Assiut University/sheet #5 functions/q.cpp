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
ll voels (string x )
{
    ll counter = 0 ;
    for (ll i = 0; i < x.size(); i++)
    {
        if(x[i] == 'a'|| x[i] == 'A'|| x[i] == 'E'|| x[i] == 'e'|| x[i] == 'I'|| x[i] == 'i'|| x[i] == 'O'|| x[i] == 'o'|| x[i] == 'U'|| x[i] == 'u')
        {
            counter ++ ;
        }
    }
    return counter ;
}
void _solve()
{
    string x ;
    getline(cin , x);
    cout << voels(x) ; 
}
int main()
{
    _kady(); _solve();
}