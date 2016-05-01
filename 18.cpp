/*
* @Author: deepanshu
* @Date:   2016-04-08 12:41:45
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:45:04
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n+1][n+1];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j <= i; ++j)
				scanf("%d",&a[i][j]);
		for (int i = 1; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				int left=0,right=0;
				if(j!=0)
					left=a[i-1][j-1];
				if(j!=i)
					right=a[i-1][j];
				a[i][j]+=max(left,right);
			}
		}
		int maxi=-1;
		for (int i = 0; i < n; ++i)
		{
			if(a[n-1][i]>maxi)
				maxi=a[n-1][i];
		}	
		printf("%d\n",maxi);
	}
}