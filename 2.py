# -*- coding: utf-8 -*-
# @Author: deepanshu
# @Date:   2016-05-02 03:42:40
# @Last Modified by:   deepanshu
# @Last Modified time: 2016-05-02 03:45:17
t=int(input())
for i in range (t):
    n=int(input())
    a,b,sum=1,2,0
    while b<=n:
       if b%2==0: sum+=b
       a , b = b , a+b
    print(sum)