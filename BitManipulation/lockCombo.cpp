// https://codeforces.com/problemset/problem/1097/B

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


	int tc = 1;
	ll mod = 1e9 + 7;
	//cin >> tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";

		ll n;
		cin >> n;
		ll a[n + 1] = {0};
		bool flag = 0;
		for (int i = 0; i < n; i++)cin >> a[i];

		for (int t = 0; t < (1 << n); t++)
		{
			ll sum = 0;
			for (int j = 0; j < n; j++)
			{
				if (t & (1 << j))sum += a[j];
				else
					sum -= a[j];
				//cout << t << "t " << j << "j " << sum << "sum\n";
			}
			if (sum % 360 == 0)
			{
				//cout<<"YES\n";
				// return 0;
				flag = 1;

			}

		}
		if (flag)
			cout << "YES\n";
		else cout << "NO\n";

	}

	return 0;
}
