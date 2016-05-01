/*
* @Author: deepanshu
* @Date:   2015-12-06 05:11:35
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:45:25
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int ans=-1;
        for(int c=1;c<=n/2;++c)
        {
            for(int b=(n-c)/2;b<c&&b<n-c;++b)
            {
                int a=n-b-c;
                if(a>b) continue;
                if(a*a + b*b==c*c)
                {
                    ans=max(ans,(long long int)a*b*c);
                }    
            }    
        }
        printf("%lld\n",ans);
    }
    return 0;
}