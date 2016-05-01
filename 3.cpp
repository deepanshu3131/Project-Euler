/*
* @Author: deepanshu
* @Date:   2015-12-06 05:18:19
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:45:26
*/
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() 
{
    int t,k,j;
    scanf("%d",&t);
    long long int n;
    while(t--)
    {
        scanf("%lld",&n);
        k=sqrt(n);
        while(n%2==0)
        {
            n=n/2;    
        }
        j=3;
        while(j<=k)
        {
            while(n%j==0)
            {
                n=n/j;
                if(n==1)
                {
                    goto label;
                }
            }
            j+=2;
        }
        if(n>1)
        {
            printf("%lld\n",n);    
        }
        else
        {
            label:
            printf("%d\n",j);    
        }
    }
    return 0;
}