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
        string x  , a;
        int result = 0 ;
        cin >> x ; 
        for (int i = 0; i < x.size(); i++)
        {
            a = x[i];
            result = stoi(a) + result ;
        }
        cout << result;
        
    }
    int main()
    {
        _kady(); _solve();
    }