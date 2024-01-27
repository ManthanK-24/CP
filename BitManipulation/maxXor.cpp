//https://codeforces.com/problemset/problem/912/B

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
	// cin >> tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";

		ll n, k;
		cin >> n >> k;
		if (k == 1)
		{
			cout << n;
		}
		else
		{
			ll ans = 1;
			while (ans <= n) ans *= 2;


			cout << ans - 1;
		}
		cout << "\n";

	}

	return 0;
}
