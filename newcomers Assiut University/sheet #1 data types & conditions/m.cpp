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
    char x;
    ll y;
    cin>>x;
    y= x;
    if (y>=48&&y<=57)
    {
        cout<<"IS DIGIT";
    }
    else if (y>=65&&y<=90)
    {
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL";
    }
    else if (y>=97&&y<=122)
    {
        cout<<"ALPHA"<<"\n"<<"IS SMALL";
    }
}
int main()
{
    _kady(); _solve();
}