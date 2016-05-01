/*
* @Author: deepanshu
* @Date:   2016-05-02 03:34:53
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:44:57
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct S
{
    long long int a,b;
    double s;
};
bool compare(S l,S r){return l.s<r.s;}
int main() {
   int n,i=0;
    scanf("%d",&n);
    S w[n];
    while(i<n)
    {
        scanf("%lld%lld",&w[i].a,&w[i].b);
        w[i].s=(((double)w[i].b)*log10((double)w[i].a));
        i++;
    }
    int k;
    scanf("%d",&k);
    sort(w,w+n,compare);
    printf("%lld %lld\n",w[k-1].a,w[k-1].b);
    return 0;
}