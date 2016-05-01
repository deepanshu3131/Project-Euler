# -*- coding: utf-8 -*-
# @Author: deepanshu
# @Date:   2015-12-06 05:16:54
# @Last Modified by:   deepanshu
# @Last Modified time: 2016-05-02 03:45:23
t=int(input())
for i in range (t):
    n=int(input())
    i=n*(n+1)/2
    j=n*(n+1)*(2*n + 1)/6
    sum=int((i*i) -j)
    print(sum)