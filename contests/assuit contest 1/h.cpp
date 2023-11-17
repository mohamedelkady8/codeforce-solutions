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
    double x, y, z;
	cin >> x >> y >> z;
	double result = (x * y) / z; 
	long long a = result;		  
	double b = result - a;	  
	if (b > 0)
	{
		cout << "double" << endl;
	}
	else if (a <= 2147483647)
	{
		cout << "int" << endl;
	}
	else
	{
		cout << "long long" << endl;
	}
}
int main()
{
    _kady(); _solve();
}