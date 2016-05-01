/*
* @Author: deepanshu
* @Date:   2016-04-07 23:53:07
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:45:07
*/
#include <bits/stdc++.h>
using namespace std;
int tri(int n){return (n*(n+1))/2;}
int countfactor(int n)
{
	int i=1,val=0;
	for (; i*i < n; ++i)
	{
		if(n%i==0)
			val+=2;
	}
	if(i*i==n)
		val+=1;
	return val;
}  
int main()
{
	/*int i=1,maxi=0;
	while(1)
	{
		int j=tri(i);
		int f=countfactor(j);
		if(f>maxi)
		{
			printf("mp[%d]=%d;",f,j);
			maxi=f;
		}
		else if(maxi>1000)
			break;
		i++;
	}*/
	map<int, int> mp;
	mp[1]=1;mp[2]=3;mp[4]=6;mp[6]=28;mp[9]=36;mp[16]=120;mp[18]=300;mp[20]=528;mp[24]=630;mp[36]=2016;mp[40]=3240;mp[48]=5460;mp[90]=25200;mp[112]=73920;mp[128]=157080;mp[144]=437580;mp[162]=749700;mp[168]=1385280;mp[192]=1493856;mp[240]=2031120;mp[320]=2162160;mp[480]=17907120;mp[576]=76576500;mp[648]=103672800;mp[768]=236215980;mp[1024]=842161320;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for (map<int, int >::iterator i = mp.begin(); i != mp.end(); ++i)
		{
			if(i->first>n)
			{
				printf("%d\n",i->second);
				break;
			}	
		}
	}
}