/*
* @Author: deepanshu
* @Date:   2015-12-06 05:14:02
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:44:41
*/
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		string s;
		cin>>s;
		long int prod=0,p;
		int l=s.length();
		for(int i=0;i<n-k+1;i++)
		{
			p=1;
			for(int j=0;j<k;j++)
			{
				p*=(s[i+j]-'0');
			}
			if(prod<p)
			{
				prod=p;
			}
		}
		cout<<prod<<endl;
	}
}