/*
* @Author: deepanshu
* @Date:   2015-12-06 05:14:30
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:45:01
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a,int b)
    {
    if(b==0)
    return a;
    else
        return gcd(b,a%b);
}
int lcm(int a,int b)
    {
    return a/gcd(a,b)*b;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int n,c=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            {
            c=lcm(c,i);
        }
        printf("%d\n",c);
    }
    return 0;
}