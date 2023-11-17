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
    string s ;
    int counter = 0 , size; 
    cin >> size ;
    cin >> s ;
    for (int i = 0; i < size; i++)
    {
        if (s[i] != s[i + 1])
        {
            counter ++ ;
        }
        else
        {
            continue;
        }
        
    }
    cout << counter ;
}
int main()
{
    _kady(); _solve();
}