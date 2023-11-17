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
    int size , arr[26] = {0};
    cin >> size ;
    for (int i = 0; i < size; i++)
    {
        char c ; 
        cin >> c ;
        arr[(int) c - 97] ++ ;

    }
    for (ll i = 0; i <= 25; i++)
    {
        while (arr[i] != 0)
        {
            cout << char (i+97) ;
            arr[i] -- ;
        }
        
    }
    

}
int main()
{
    _kady(); _solve();
}