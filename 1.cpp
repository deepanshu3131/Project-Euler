/*
* @Author: deepanshu
* @Date:   2016-05-02 03:42:48
* @Last Modified by:   deepanshu
* @Last Modified time: 2016-05-02 03:44:55
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int t;
	scanf("%d",&t);
	long int n,i,sum;
	while(t--)
	{
		sum=0;
	    scanf("%ld",&n);
		n=n-1;
	    i=n/3;
		sum+=3*i*(i+1)/2;
		i=n/5;
		sum+=5*i*(i+1)/2;
		i=n/15;
		sum-=15*i*(i+1)/2;
		printf("%ld\n",sum);
	}        
    return 0;
}