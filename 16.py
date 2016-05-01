# -*- coding: utf-8 -*-
# @Author: deepanshu
# @Date:   2016-04-08 11:29:34
# @Last Modified by:   deepanshu
# @Last Modified time: 2016-05-02 03:45:00
t=int(raw_input())
while t>0:
	n=int(raw_input())
	print sum(map(long,str(2**n)))
	t-=1