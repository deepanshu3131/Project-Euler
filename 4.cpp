/*
* @Author: deepanshu
* @Date:   2015-12-06 05:15:13
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:44:59
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool palin(int n)
{
    vector<int> a;
    while(n)
    {
        a.push_back(n%10);
        n=n/10;
    }    
    int l=a.size();
    for(int i=0;i<l;i++)
    {
        if(a[i]!=a[l-i-1])
        {
            return false;
        }    
    }
    return true;
}
int main() {
    vector<int> pali;
    for(int i=100;i<=999;++i)
    {
        for(int j=100;j<=i;++j)
        {
        int m= i*j;
            if(palin(m))
            {
                pali.push_back(m);
            }
        }
    }
    int l=pali.size();
    sort(pali.begin(),pali.end());
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int max1=0;
        scanf("%d",&n);
        for(int k=0;k<l;k++)
        {
            if(pali[k]<=n)
                {
                max1=max(max1,pali[k]);
            }
        }
        printf("%d\n",max1);
    }
    return 0;
}