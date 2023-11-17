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
        string x,y;
        cin>>y;
        x=y;
       reverse(all(x));
       cout << stoi(x) << "\n";
        if(x==y) 
        {
        cout << "YES";
        }
        else 
        {
            cout << "NO";
        }
     
    }
    int main()
    {
        _kady(); _solve();
    }