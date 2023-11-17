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
   int t ;
	cin >> t ;
	while(t--)
    {
		int size ;
		int counter = 0 ;
		cin >> size ;
		int arr [size] ;
		for (int i=0 ;i<size ;i++ )
        {
			cin >> arr [i] ;
		}
		counter = size ;
		int l = 0 ;
		int k = 0 ;
		while(true) 
        {
			if (k == size - 1)
            {
				break ;
			}
			if (arr[l] > arr[l+1])
            {
				k++;
				l=k;
				continue ;
			}
			counter++ ;
			l++ ;
			if(l == size - 1)
            {
				k++ ;
				l = k ;
			}
		}
		cout << counter << endl ;
	} 
}
int main()
{
    _kady(); _solve();
}