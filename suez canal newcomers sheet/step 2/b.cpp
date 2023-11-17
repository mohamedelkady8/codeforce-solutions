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
        ll x;
        cin>>x;
        for (ll i = 2; i <= x; i++)
        {
            bool y=true;
            for (ll j=2 ; j<i;j++)
            if(i%j==0)
            {
                y=false;
            }
            if (y)
            {
                cout<<i<<" ";
            }
        }
        
        
     
    }
    int main()
    {
        _kady(); _solve();
    }