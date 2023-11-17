    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define all(v)	 ((v).begin()), ((v).end())
     
    void _kady()
    {
        ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
        #endif
    }
    void _solve()
    {
        int a , b , c = 0 ;
        cin >> a >> b ; 
        for (int i = 1; i <= min (a,b) ; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c = i;
            }
            
        }
           cout << c ;
    }
    int main()
    {
        _kady(); _solve();
    }