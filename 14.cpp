/*
* @Author: deepanshu
* @Date:   2016-04-08 00:46:21
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:45:38
*/
#include <bits/stdc++.h>
#define maxi 5000007 
using namespace std;
int a[maxi],b[maxi];
int colatz(long long int n)
{
	if(n==1)
		return 0;
	if(n< maxi&&a[n])
		return a[n];
	int ans;
	if(n%2==0)
		ans=colatz(n/2)+1;
	else 
		ans=colatz(3*n+1)+1;
	if(n<maxi)
		a[n]=ans;
	return ans;
}
int main()
{
	for (long long int i = 1; i < maxi; ++i)
	{
		int ans=colatz(i);
		if(ans>=a[b[i-1]])
			b[i]=i;
		else
			b[i]=b[i-1];
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",b[n]);
	}
}