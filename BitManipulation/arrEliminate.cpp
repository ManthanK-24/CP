
// https://codeforces.com/contest/1602/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
#define fio ios_base::sync_with_stdio(NULL),cin.tie(0),cout.tie(0)
 

int main()
{
	fio;
#ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
 
	ll mod = 1e9 + 7;
	int tc = 1;
	cin >> tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";
 
		ll n;
		cin >> n;
		ll a[n + 1] = {0};
		vector<ll> bits(32, 0);
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 32; j++)
			{
				if (a[i] & 1 << j)
					bits[j]++;
 
			}
		}
		for (int i = 1; i <= n; i++)
		{
			bool div = 1;
			for (int j = 0; j < 32; j++)
			{
				if (bits[j] % i)div = 0;
			}
			if (div)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
 
	}
 
	return 0;
}
