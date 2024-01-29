// https://codeforces.com/problemset/problem/1594/B

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
	cin >> tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";

		ll n, k;
		cin >> n >> k;
		int tc=1;
    cin>>tc;
    for(int ii=1;ii<=tc;ii++)
    {
      //  cout<<"Case #"<<ii<<": ";
        ll n,k;
        cin>>n>>k;
        ll p = 1;
        ll ans = 0,mod = 1e9+7;
        for(int j=0;j<31;j++)
        {
            if(k & (1<<j))
            {
                ans = (ans + p) % mod;
            }
            p *= n;
            p %= mod;
        }
        cout<<ans;
	cout << "\n";

     }

	return 0;
}
