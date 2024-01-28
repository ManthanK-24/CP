// https://codeforces.com/problemset/problem/1594/B

#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
#define fio ios_base::sync_with_stdio(NULL),cin.tie(0),cout.tie(0)


ll power(ll a, ll b, ll mod)
{
	//a^b
	ll cnt = 0, res = 1;
	while (cnt < b)
	{
		res = (res * a) % mod;
		cnt++;
	}
	return res;
}

int main()
{
	fio;
#ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int tc = 1;
	ll mod = 1e9 + 7;
	cin >> tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";

		ll n, k;
		cin >> n >> k;
		if (n == 2)
		{
			cout << k;
		}
		else
		{
			ll ans = 0;
			for (int i = 31; i >= 0; i--)
			{
				ll msk = 1LL << i;
				if (msk & k)
				{
					ans = (ans + power(n, i, mod)) % mod;
				}
				//	cout << i << "idx " << ans << "ans\n";
			}
			cout << ans;
		}
		cout << "\n";

	}

	return 0;
}
