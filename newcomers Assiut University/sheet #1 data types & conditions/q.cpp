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
 double x,y;
 cin>>x>>y;
 if (x>0 && y>0)
 {
    cout<<"Q1";
 }
 else if (x<0 && y>0)
 {
    cout<<"Q2";
 }
 else if (x<0 && y<0)
 {
    cout<<"Q3";
 }
 else if (x>0 && y<0)
 {
    cout<<"Q4";
 }
 else if (x==0 && y<0)
 {
    cout<<"Eixo Y";
 }
 else if (x>0 && y==0)
 {
    cout<<"Eixo X";
 }
 else if (x==0 && y>0)
 {
    cout<<"Eixo Y";
 }
 else if (x<0 && y==0)
 {
    cout<<"Eixo X";
 }
 else if (x==0 && y==0)
 {
    cout<<"Origem";
 }
 
}
int main()
{
    _kady(); _solve();
}