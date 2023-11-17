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
     ll  a,b;
 
    cin >> a >> b ;
if ( b % 2 == 0 &&  a % 2 == 0)
{
    cout << " Negm";
}
else if ( b % 2 == 0 && a % 2 != 0) 
{
    cout << "Gerges";
}
else if ( a % 2 != 0 && b % 2 != 0)
 {
    cout << "Negm";
}
else
 {
    cout << "Gerges";
}
}
int main()
{
    _kady(); _solve();
}