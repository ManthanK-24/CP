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
	//cin >> tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";
 
		ll n, k;
		cin >> n >> k ;
 
		if (k < __builtin_popcount(n) || k > n)
			cout << "NO";
		else
		{
			priority_queue<ll> pq;
			for (int i = 0; i < 32; i++)
			{
				if (n & 1LL << i)
					pq.push(1LL << i);
			}
			for (int i = 0; i < k - __builtin_popcount(n); i++)
			{
				ll tp = pq.top();
				pq.pop();
				pq.push(tp / 2);
				pq.push(tp / 2);
			}
			cout << "YES\n";
			while (!pq.empty())
			{
				cout << pq.top() << " ";
				pq.pop();
			}
 
		}
 
		cout << "\n";
 
	}
 
	return 0;
}
