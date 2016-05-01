/*
* @Author: deepanshu
* @Date:   2016-04-08 00:10:38
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:44:36
*/
#include <bits/stdc++.h>
#define maxi 1001
#define mod 1000000007
using namespace std;
long long comb[maxi][maxi];
int main()
{
	for (int i = 1; i < maxi; ++i)
	{
		comb[i][0]=1;
		comb[i][i]=1;
	}
	for (int i = 2; i < maxi; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			comb[i][j]=(comb[i-1][j]+comb[i-1][j-1])%mod;
		}
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		printf("%lld\n",comb[n+m][n]);
	}
}