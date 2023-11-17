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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int maxlength = 0;
        int currentlength = 0;

        for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;

            if (ai == 0) {
                currentlength++;
            } else {
                maxlength = max(maxlength, currentlength);
                currentlength = 0;
            }
        }

        maxlength = max(maxlength, currentlength);
        cout << maxlength << endl;
    }
 }
    int main()
    {
        _kady(); _solve();
    }