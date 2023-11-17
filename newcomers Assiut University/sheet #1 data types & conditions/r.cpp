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
    ll a,b,c,d,e,f,g;
    cin>>a;
    b=a/365;
    c=a%365;
    d=c/30;
    e=c%30;
    cout<<b <<" years"<<"\n";
    cout<<d << " months"<<"\n";
    cout<<e <<" days";
;
}
int main()
{
    _kady(); _solve();
}
