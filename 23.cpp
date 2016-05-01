/*
* @Author: deepanshu
* @Date:   2016-04-07 23:23:23
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:45:28
*/
#include <bits/stdc++.h>
#define maxi 28123
using namespace std;
int a[maxi+5];
int main()
{
	vector<int> v;
	for (int j = 2; j < maxi; ++j)
	{
		int i=2,val=1;
		for (; i*i < j; ++i)
		{
			if(j%i==0)
				val=val+i+(j/i);
		}
		if(i*i==j)
			val+=i;
		if(val>j)
		{
			v.push_back(j);
			a[j]=1;
		}
	}
	int t;
	scanf("%d",&t);
	int k=v.size();
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n>=maxi)
			printf("YES\n");
		else
		{
			bool flag=false;
			for (int i = 0; i < k && v[i] < n; ++i)
			{
				if(a[n-v[i]])
				{
					flag=true;
					break;
				}
			}
			if(flag==true)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}